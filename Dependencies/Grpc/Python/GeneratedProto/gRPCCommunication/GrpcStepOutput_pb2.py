# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/gRPCCommunication/GrpcStepOutput.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.gRPCCommunication import GrpcProtoType_pb2 as proto_dot_gRPCCommunication_dot_GrpcProtoType__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/gRPCCommunication/GrpcStepOutput.proto',
  package='gRPCCommunication',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n,proto/gRPCCommunication/GrpcStepOutput.proto\x12\x11gRPCCommunication\x1a+proto/gRPCCommunication/GrpcProtoType.proto\"\xd1\x02\n\x0eGrpcStepOutput\x12\x19\n\x11stringObervations\x18\x01 \x01(\t\x12\x18\n\x10\x66loatObervations\x18\x02 \x03(\x02\x12\x16\n\x0eintObervations\x18\x03 \x03(\x05\x12\x0e\n\x06reward\x18\x04 \x01(\x02\x12\x0c\n\x04\x64one\x18\x05 \x01(\x08\x12\x39\n\x04info\x18\x06 \x03(\x0b\x32+.gRPCCommunication.GrpcStepOutput.InfoEntry\x12\x38\n\x0eobervationType\x18\x07 \x03(\x0b\x32 .gRPCCommunication.GrpcProtoType\x12\x32\n\x08infoType\x18\x08 \x03(\x0b\x32 .gRPCCommunication.GrpcProtoType\x1a+\n\tInfoEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\x0c:\x02\x38\x01\x62\x06proto3')
  ,
  dependencies=[proto_dot_gRPCCommunication_dot_GrpcProtoType__pb2.DESCRIPTOR,])




_GRPCSTEPOUTPUT_INFOENTRY = _descriptor.Descriptor(
  name='InfoEntry',
  full_name='gRPCCommunication.GrpcStepOutput.InfoEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='gRPCCommunication.GrpcStepOutput.InfoEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='gRPCCommunication.GrpcStepOutput.InfoEntry.value', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=407,
  serialized_end=450,
)

_GRPCSTEPOUTPUT = _descriptor.Descriptor(
  name='GrpcStepOutput',
  full_name='gRPCCommunication.GrpcStepOutput',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='stringObervations', full_name='gRPCCommunication.GrpcStepOutput.stringObervations', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='floatObervations', full_name='gRPCCommunication.GrpcStepOutput.floatObervations', index=1,
      number=2, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='intObervations', full_name='gRPCCommunication.GrpcStepOutput.intObervations', index=2,
      number=3, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='reward', full_name='gRPCCommunication.GrpcStepOutput.reward', index=3,
      number=4, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='done', full_name='gRPCCommunication.GrpcStepOutput.done', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='info', full_name='gRPCCommunication.GrpcStepOutput.info', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='obervationType', full_name='gRPCCommunication.GrpcStepOutput.obervationType', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='infoType', full_name='gRPCCommunication.GrpcStepOutput.infoType', index=7,
      number=8, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_GRPCSTEPOUTPUT_INFOENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=113,
  serialized_end=450,
)

_GRPCSTEPOUTPUT_INFOENTRY.containing_type = _GRPCSTEPOUTPUT
_GRPCSTEPOUTPUT.fields_by_name['info'].message_type = _GRPCSTEPOUTPUT_INFOENTRY
_GRPCSTEPOUTPUT.fields_by_name['obervationType'].message_type = proto_dot_gRPCCommunication_dot_GrpcProtoType__pb2._GRPCPROTOTYPE
_GRPCSTEPOUTPUT.fields_by_name['infoType'].message_type = proto_dot_gRPCCommunication_dot_GrpcProtoType__pb2._GRPCPROTOTYPE
DESCRIPTOR.message_types_by_name['GrpcStepOutput'] = _GRPCSTEPOUTPUT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GrpcStepOutput = _reflection.GeneratedProtocolMessageType('GrpcStepOutput', (_message.Message,), {

  'InfoEntry' : _reflection.GeneratedProtocolMessageType('InfoEntry', (_message.Message,), {
    'DESCRIPTOR' : _GRPCSTEPOUTPUT_INFOENTRY,
    '__module__' : 'proto.gRPCCommunication.GrpcStepOutput_pb2'
    # @@protoc_insertion_point(class_scope:gRPCCommunication.GrpcStepOutput.InfoEntry)
    })
  ,
  'DESCRIPTOR' : _GRPCSTEPOUTPUT,
  '__module__' : 'proto.gRPCCommunication.GrpcStepOutput_pb2'
  # @@protoc_insertion_point(class_scope:gRPCCommunication.GrpcStepOutput)
  })
_sym_db.RegisterMessage(GrpcStepOutput)
_sym_db.RegisterMessage(GrpcStepOutput.InfoEntry)


_GRPCSTEPOUTPUT_INFOENTRY._options = None
# @@protoc_insertion_point(module_scope)
