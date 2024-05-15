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

namespace cpu {

TORCH_API at::Tensor nansum(const at::Tensor & self, at::OptionalIntArrayRef dim=c10::nullopt, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt);
TORCH_API at::Tensor & nansum_out(at::Tensor & out, const at::Tensor & self, at::OptionalIntArrayRef dim=c10::nullopt, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt);
TORCH_API at::Tensor & nansum_outf(const at::Tensor & self, at::OptionalIntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out);

} // namespace cpu
} // namespace at
