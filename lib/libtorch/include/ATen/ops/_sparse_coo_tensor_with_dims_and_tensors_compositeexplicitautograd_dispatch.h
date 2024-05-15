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

TORCH_API at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_out(at::Tensor & out, int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<bool> is_coalesced=c10::nullopt);
TORCH_API at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_outf(int64_t sparse_dim, int64_t dense_dim, at::IntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<bool> is_coalesced, at::Tensor & out);
TORCH_API at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_symint_out(at::Tensor & out, int64_t sparse_dim, int64_t dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<bool> is_coalesced=c10::nullopt);
TORCH_API at::Tensor & _sparse_coo_tensor_with_dims_and_tensors_symint_outf(int64_t sparse_dim, int64_t dense_dim, c10::SymIntArrayRef size, const at::Tensor & indices, const at::Tensor & values, c10::optional<bool> is_coalesced, at::Tensor & out);

} // namespace compositeexplicitautograd
} // namespace at
