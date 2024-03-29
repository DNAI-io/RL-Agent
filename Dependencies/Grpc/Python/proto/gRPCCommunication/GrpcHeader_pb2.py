# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/gRPCCommunication/GrpcHeader.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.gRPCCommunication import GrpCommandType_pb2 as proto_dot_gRPCCommunication_dot_GrpCommandType__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/gRPCCommunication/GrpcHeader.proto',
  package='gRPCCommunication',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n(proto/gRPCCommunication/GrpcHeader.proto\x12\x11gRPCCommunication\x1a,proto/gRPCCommunication/GrpCommandType.proto\"j\n\nGrpcHeader\x12\x13\n\x0bmagicNumber\x18\x01 \x01(\x05\x12\x0e\n\x06status\x18\x02 \x01(\x05\x12\x37\n\x0c\x63ommandTypes\x18\x03 \x01(\x0e\x32!.gRPCCommunication.GrpCommandTypeb\x06proto3')
  ,
  dependencies=[proto_dot_gRPCCommunication_dot_GrpCommandType__pb2.DESCRIPTOR,])




_GRPCHEADER = _descriptor.Descriptor(
  name='GrpcHeader',
  full_name='gRPCCommunication.GrpcHeader',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='magicNumber', full_name='gRPCCommunication.GrpcHeader.magicNumber', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='status', full_name='gRPCCommunication.GrpcHeader.status', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='commandTypes', full_name='gRPCCommunication.GrpcHeader.commandTypes', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=109,
  serialized_end=215,
)

_GRPCHEADER.fields_by_name['commandTypes'].enum_type = proto_dot_gRPCCommunication_dot_GrpCommandType__pb2._GRPCOMMANDTYPE
DESCRIPTOR.message_types_by_name['GrpcHeader'] = _GRPCHEADER
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GrpcHeader = _reflection.GeneratedProtocolMessageType('GrpcHeader', (_message.Message,), {
  'DESCRIPTOR' : _GRPCHEADER,
  '__module__' : 'proto.gRPCCommunication.GrpcHeader_pb2'
  # @@protoc_insertion_point(class_scope:gRPCCommunication.GrpcHeader)
  })
_sym_db.RegisterMessage(GrpcHeader)


# @@protoc_insertion_point(module_scope)
