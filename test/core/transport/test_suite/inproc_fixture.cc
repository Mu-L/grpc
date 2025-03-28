// Copyright 2023 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "src/core/config/core_configuration.h"
#include "src/core/ext/transport/inproc/inproc_transport.h"
#include "test/core/transport/test_suite/transport_test.h"

namespace grpc_core {

TRANSPORT_FIXTURE(Inproc) {
  auto transports =
      MakeInProcessTransportPair(CoreConfiguration::Get()
                                     .channel_args_preconditioning()
                                     .PreconditionChannelArgs(nullptr));
  return {std::move(transports.first), std::move(transports.second)};
}

}  // namespace grpc_core
