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

TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> linalg_lstsq_out(at::Tensor & solution, at::Tensor & residuals, at::Tensor & rank, at::Tensor & singular_values, const at::Tensor & self, const at::Tensor & b, c10::optional<double> rcond=c10::nullopt, c10::optional<c10::string_view> driver=c10::nullopt);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> linalg_lstsq_outf(const at::Tensor & self, const at::Tensor & b, c10::optional<double> rcond, c10::optional<c10::string_view> driver, at::Tensor & solution, at::Tensor & residuals, at::Tensor & rank, at::Tensor & singular_values);

} // namespace cpu
} // namespace at
