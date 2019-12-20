rem variables

rem GRPC-TOOLS required. Install with `nuget install Grpc.Tools`. 
rem Then un-comment and replace [DIRECTORY] with location of files.
rem For example, on Windows, you might have something like:
rem set COMPILER=Grpc.Tools.1.14.1\tools\windows_x64
rem set COMPILER=[DIRECTORY]

set PACKAGE=gRPCCommunication

set SRC_DIR=proto\%PACKAGE%
set DST_DIR_CPP=cpp
set DST_DIR_P=python
set PROTO_PATH=.\

set PROTOC_TOOL=tools

rem clean
rd /s /q %DST_DIR_CPP%
rd /s /q %DST_DIR_P%\%PACKAGE%
mkdir %DST_DIR_CPP%
mkdir %DST_DIR_P%\%PACKAGE%

rem generate proto objects in python and CPP

for %%i in (%SRC_DIR%\*.proto) do (
    %PROTOC_TOOL%\protoc.exe --proto_path=%PROTO_PATH% --cpp_out=%DST_DIR_CPP% %%i
    %PROTOC_TOOL%\protoc.exe --proto_path=%PROTO_PATH% --plugin=protoc-gen-mypy=protoc_gen_mypy.bat --python_out=%DST_DIR_P% --mypy_out=%DST_DIR_P% %%i 
)

rem grpc

set GRPC=GrpcCommunicator.proto

%PROTOC_TOOL%\protoc.exe --proto_path=%PROTO_PATH% --cpp_out %DST_DIR_CPP% --grpc_out %DST_DIR_CPP% %SRC_DIR%\%GRPC% --plugin=protoc-gen-grpc=%PROTOC_TOOL%\grpc_cpp_plugin.exe
python -m grpc_tools.protoc --proto_path=%PROTO_PATH% --python_out=%DST_DIR_P% --grpc_python_out=%DST_DIR_P% %SRC_DIR%\%GRPC%

rem Generate the init file for the python module
rem rm -f $DST_DIR_P/$PACKAGE/__init__.py
setlocal enabledelayedexpansion
for %%i in (%DST_DIR_P%\%PACKAGE%\*.py) do ( 
set FILE=%%~ni
rem echo from .$(basename $FILE) import * >> $DST_DIR_P/$PACKAGE/__init__.py
echo from .!FILE! import * >> %DST_DIR_P%\%PYTHON_PACKAGE%\__init__.py
)