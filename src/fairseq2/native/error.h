// Copyright (c) Meta Platforms, Inc. and affiliates.
// All rights reserved.
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include "fairseq2/native/api.h"

namespace fairseq2::detail {

#ifdef NDEBUG

[[noreturn]] inline void
unreachable()
{
    __builtin_unreachable();
}

#else

[[noreturn]] FAIRSEQ2_API void
unreachable(const char *file = __builtin_FILE(), int line = __builtin_LINE());

#endif

}  // namespace fairseq2::detail
