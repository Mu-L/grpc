# Copyright 2015 gRPC authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

FROM silkeh/clang:19-bookworm

#=================
# Basic C core dependencies

# C/C++ dependencies according to https://github.com/grpc/grpc/blob/master/BUILDING.md
RUN apt-get update && apt-get install -y \
  build-essential \
  autoconf \
  libtool \
  pkg-config \
  && apt-get clean

# GCC
RUN apt-get update && apt-get install -y \
  gcc \
  g++ \
  && apt-get clean

# libc6
RUN apt-get update && apt-get install -y \
  libc6 \
  libc6-dbg \
  libc6-dev \
  && apt-get clean

# Tools
RUN apt-get update && apt-get install -y \
  bzip2 \
  curl \
  dnsutils \
  git \
  lcov \
  make \
  strace \
  time \
  unzip \
  wget \
  zip \
  && apt-get clean

#=================
# Setup git to access working directory across docker boundary.
# This avoids the "fatal: detected dubious ownership in repository XYZ"
# git error.

RUN git config --global --add safe.directory '*'
RUN git config --global protocol.file.allow always



RUN apt update && apt install -y python3 python3-pip && apt clean

RUN python3 -m pip install --break-system-packages --upgrade google-auth==1.23.0 google-api-python-client==1.12.8 oauth2client==4.1.0


RUN mkdir /var/local/jenkins


#========================
# Sanity test dependencies

# autoconf automake libtool curl shellcheck: main dependencies
# jq git: prerequisites for the clang-tidy script
# libgtest-dev: otherwise clang-tidy will report missing <gtest/gtest.h> header
RUN apt install -y \
    autoconf \
    automake \
    curl \
    git\
    jq \
    libgtest-dev \
    libtool \
    python3-lxml \
    python3-mako \
    python3-simplejson \
    python3-venv \
    python3-virtualenv \
    shellcheck \
    && apt clean

#========================
# Bazel installation

# Must be in sync with tools/bazel
ENV BAZEL_VERSION 8.0.1

# The correct bazel version is already preinstalled, no need to use //tools/bazel wrapper.
ENV DISABLE_BAZEL_WRAPPER 1

# Download the correct bazel version and make sure it's on path.
RUN BAZEL_ARCH_SUFFIX="$(uname -m | sed s/aarch64/arm64/)" \
  && curl -sSL --fail -o /usr/local/bin/bazel "https://github.com/bazelbuild/bazel/releases/download/$BAZEL_VERSION/bazel-$BAZEL_VERSION-linux-$BAZEL_ARCH_SUFFIX" \
  && chmod a+x /usr/local/bin/bazel

# Normally we would run "bazel --version" here to make sure bazel
# was correctly installed, but we can't do that because
# of # https://github.com/bazelbuild/bazel/issues/11379.
# We want to keep the arm64 version of the image buildable
# on x64 with use of qemu-user-static & binfmt emulation,
# but the self-extraction is broken for bazel currently.
# The binary will work correctly when run on real arm64
# hardware, when qemu-user-static isn't getting into the way.

# Install buildifier v8.0.0
RUN wget -O buildifier https://github.com/bazelbuild/buildtools/releases/download/v8.0.0/buildifier-linux-amd64
RUN chmod +x buildifier
RUN mv buildifier /usr/local/bin


# Define the default command.
CMD ["bash"]
