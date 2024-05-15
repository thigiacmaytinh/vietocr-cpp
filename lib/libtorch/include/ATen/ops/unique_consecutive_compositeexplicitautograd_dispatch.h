#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace compositeexplicitautograd {

TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> unique_consecutive_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, const at::Tensor & self, bool return_inverse=false, bool return_counts=false, c10::optional<int64_t> dim=c10::nullopt);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> unique_consecutive_outf(const at::Tensor & self, bool return_inverse, bool return_counts, c10::optional<int64_t> dim, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2);

} // namespace compositeexplicitautograd
} // namespace at
