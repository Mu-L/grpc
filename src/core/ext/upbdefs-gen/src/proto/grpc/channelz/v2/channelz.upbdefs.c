/* This file was generated by upb_generator from the input file:
 *
 *     src/proto/grpc/channelz/v2/channelz.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */


#include "upb/reflection/def.h"
#include "src/proto/grpc/channelz/v2/channelz.upbdefs.h"
#include "src/proto/grpc/channelz/v2/channelz.upb_minitable.h"

extern _upb_DefPool_Init google_protobuf_any_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_timestamp_proto_upbdefinit;

static const char descriptor[578] = {
    '\n', ')', 's', 'r', 'c', '/', 'p', 'r', 'o', 't', 'o', '/',
    'g', 'r', 'p', 'c', '/', 'c', 'h', 'a', 'n', 'n', 'e', 'l',
    'z', '/', 'v', '2', '/', 'c', 'h', 'a', 'n', 'n', 'e', 'l',
    'z', '.', 'p', 'r', 'o', 't', 'o', '\022', '\020', 'g', 'r', 'p',
    'c', '.', 'c', 'h', 'a', 'n', 'n', 'e', 'l', 'z', '.', 'v',
    '2', '\032', '\031', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r',
    'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 'n', 'y', '.', 'p',
    'r', 'o', 't', 'o', '\032', '\037', 'g', 'o', 'o', 'g', 'l', 'e',
    '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 't', 'i',
    'm', 'e', 's', 't', 'a', 'm', 'p', '.', 'p', 'r', 'o', 't',
    'o', '\"', 'F', '\n', '\004', 'D', 'a', 't', 'a', '\022', '\022', '\n',
    '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'R',
    '\004', 'n', 'a', 'm', 'e', '\022', '*', '\n', '\005', 'v', 'a', 'l',
    'u', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\024', '.', 'g',
    'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b',
    'u', 'f', '.', 'A', 'n', 'y', 'R', '\005', 'v', 'a', 'l', 'u',
    'e', '\"', '\337', '\001', '\n', '\006', 'E', 'n', 't', 'i', 't', 'y',
    '\022', '\016', '\n', '\002', 'i', 'd', '\030', '\001', ' ', '\001', '(', '\003',
    'R', '\002', 'i', 'd', '\022', '\022', '\n', '\004', 'k', 'i', 'n', 'd',
    '\030', '\002', ' ', '\001', '(', '\t', 'R', '\004', 'k', 'i', 'n', 'd',
    '\022', '\030', '\n', '\007', 'p', 'a', 'r', 'e', 'n', 't', 's', '\030',
    '\003', ' ', '\003', '(', '\003', 'R', '\007', 'p', 'a', 'r', 'e', 'n',
    't', 's', '\022', '\032', '\n', '\010', 'o', 'r', 'p', 'h', 'a', 'n',
    'e', 'd', '\030', '\004', ' ', '\001', '(', '\010', 'R', '\010', 'o', 'r',
    'p', 'h', 'a', 'n', 'e', 'd', '\022', '\033', '\n', '\t', 't', 'i',
    'm', 'e', 'd', '_', 'o', 'u', 't', '\030', '\005', ' ', '\001', '(',
    '\010', 'R', '\010', 't', 'i', 'm', 'e', 'd', 'O', 'u', 't', '\022',
    '*', '\n', '\004', 'd', 'a', 't', 'a', '\030', '\006', ' ', '\003', '(',
    '\013', '2', '\026', '.', 'g', 'r', 'p', 'c', '.', 'c', 'h', 'a',
    'n', 'n', 'e', 'l', 'z', '.', 'v', '2', '.', 'D', 'a', 't',
    'a', 'R', '\004', 'd', 'a', 't', 'a', '\022', '2', '\n', '\005', 't',
    'r', 'a', 'c', 'e', '\030', '\007', ' ', '\003', '(', '\013', '2', '\034',
    '.', 'g', 'r', 'p', 'c', '.', 'c', 'h', 'a', 'n', 'n', 'e',
    'l', 'z', '.', 'v', '2', '.', 'T', 'r', 'a', 'c', 'e', 'E',
    'v', 'e', 'n', 't', 'R', '\005', 't', 'r', 'a', 'c', 'e', '\"',
    '\224', '\001', '\n', '\n', 'T', 'r', 'a', 'c', 'e', 'E', 'v', 'e',
    'n', 't', '\022', ' ', '\n', '\013', 'd', 'e', 's', 'c', 'r', 'i',
    'p', 't', 'i', 'o', 'n', '\030', '\001', ' ', '\001', '(', '\t', 'R',
    '\013', 'd', 'e', 's', 'c', 'r', 'i', 'p', 't', 'i', 'o', 'n',
    '\022', '8', '\n', '\t', 't', 'i', 'm', 'e', 's', 't', 'a', 'm',
    'p', '\030', '\002', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o',
    'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u',
    'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 'R',
    '\t', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '\022', '*',
    '\n', '\004', 'd', 'a', 't', 'a', '\030', '\003', ' ', '\003', '(', '\013',
    '2', '\026', '.', 'g', 'r', 'p', 'c', '.', 'c', 'h', 'a', 'n',
    'n', 'e', 'l', 'z', '.', 'v', '2', '.', 'D', 'a', 't', 'a',
    'R', '\004', 'd', 'a', 't', 'a', 'b', '\006', 'p', 'r', 'o', 't',
    'o', '3',
};

static _upb_DefPool_Init *deps[3] = {
    &google_protobuf_any_proto_upbdefinit,
    &google_protobuf_timestamp_proto_upbdefinit,
    NULL,
};

_upb_DefPool_Init src_proto_grpc_channelz_v2_channelz_proto_upbdefinit = {
    deps,
    &src_proto_grpc_channelz_v2_channelz_proto_upb_file_layout,
    "src/proto/grpc/channelz/v2/channelz.proto",
    UPB_STRINGVIEW_INIT(descriptor, sizeof(descriptor)),
};
