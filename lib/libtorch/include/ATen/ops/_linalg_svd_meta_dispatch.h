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

TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _linalg_svd(const at::Tensor & A, bool full_matrices=false, bool compute_uv=true, c10::optional<c10::string_view> driver=c10::nullopt);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _linalg_svd_out(at::Tensor & U, at::Tensor & S, at::Tensor & Vh, const at::Tensor & A, bool full_matrices=false, bool compute_uv=true, c10::optional<c10::string_view> driver=c10::nullopt);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _linalg_svd_outf(const at::Tensor & A, bool full_matrices, bool compute_uv, c10::optional<c10::string_view> driver, at::Tensor & U, at::Tensor & S, at::Tensor & Vh);

} // namespace meta
} // namespace at
