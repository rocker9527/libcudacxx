//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <cuda/std/functional>

// reference_wrapper

// reference_wrapper(T&&) = delete;

// XFAIL: c++98, c++03

// .fail. expects compilation to fail, but this would only fail at runtime with NVRTC
// UNSUPPORTED: nvrtc

#include <cuda/std/functional>
#include <cuda/std/cassert>

int main(int, char**)
{
    cuda::std::reference_wrapper<const int> r(3);

  return 0;
}