//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// UNSUPPORTED: libcpp-has-no-monotonic-clock

// <cuda/std/chrono>

// steady_clock

// static time_point now();

#include <cuda/std/chrono>
#include <cuda/std/cassert>

int main(int, char**)
{
    typedef cuda::std::chrono::steady_clock C;
    C::time_point t1 = C::now();
    C::time_point t2 = C::now();
    assert(t2 >= t1);

  return 0;
}
