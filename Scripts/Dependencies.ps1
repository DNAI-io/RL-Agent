##########################################
#         Unreal dependencies            #
##########################################

#Init variables
Write-Output "Starting installing dependencies."
$url_unreal = "https://onedrive.live.com/download?cid=20F3D8887DF12486&resid=20F3D8887DF12486%2197469&authkey=AOp2yQSD0yacsD4"
$output_unreal = "$PSScriptRoot\ThirdParty.zip"
$start_time_unreal = Get-Date
$extract_output_unreal = "$PSScriptRoot\..\UnrealEnv\Plugins\GrpcUnreal\Source"
#Download zip archive
Write-Output "Download unreal env dependencies..."
(New-Object System.Net.WebClient).DownloadFile($url_unreal, $output_unreal)
Write-Output "Downloading took: $((Get-Date).Subtract($start_time_unreal).Seconds) second(s)"
#Extract zip
Write-Output "Starting extract.."
Expand-Archive $output_unreal $extract_output_unreal
#Deleting zip
Write-Output "Deleting zip..."
Remove-Item $output_unreal
Write-Output "Successfully extract unreal-env dependencies  to $extract_output_unreal"

##########################################
#         DynanicGrpc dependencies       #
##########################################

#Init variables
$url_grpc = "https://onedrive.live.com/download?cid=20F3D8887DF12486&resid=20F3D8887DF12486%2197471&authkey=AF0qY4nt9blolIs"
$output_grpc = "$PSScriptRoot\lib.zip"
$start_time_grpc = Get-Date
$extract_output_grpc = "$PSScriptRoot\..\Dependencies\Grpc\Cpp"

#Download zip archive
Write-Output "Download DynamicGrpc dependencies..."
(New-Object System.Net.WebClient).DownloadFile($url_grpc, $output_grpc)
Write-Output "Downloading took: $((Get-Date).Subtract($start_time_grpc).Seconds) second(s)"
#Extract zip
Write-Output "Starting extract.."
Expand-Archive $output_grpc $extract_output_grpc
#Deleting zip
Write-Output "Deleting zip..."
Remove-Item $output_grpc
Write-Output "Successfully extract DynamicGrpc dependencies to $extract_output_grpc"

Write-Output "Done."