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

namespace meta {

TORCH_API at::Tensor clamp_min(const at::Tensor & self, const at::Scalar & min);
TORCH_API at::Tensor & clamp_min_out(at::Tensor & out, const at::Tensor & self, const at::Scalar & min);
TORCH_API at::Tensor & clamp_min_outf(const at::Tensor & self, const at::Scalar & min, at::Tensor & out);
TORCH_API at::Tensor & clamp_min_(at::Tensor & self, const at::Scalar & min);
TORCH_API at::Tensor clamp_min(const at::Tensor & self, const at::Tensor & min);
TORCH_API at::Tensor & clamp_min_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & min);
TORCH_API at::Tensor & clamp_min_outf(const at::Tensor & self, const at::Tensor & min, at::Tensor & out);
TORCH_API at::Tensor & clamp_min_(at::Tensor & self, const at::Tensor & min);

} // namespace meta
} // namespace at
