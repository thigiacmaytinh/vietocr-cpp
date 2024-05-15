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

TORCH_API ::std::tuple<at::Tensor,at::Tensor> fractional_max_pool2d(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & random_samples);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> fractional_max_pool2d_out(at::Tensor & output, at::Tensor & indices, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & random_samples);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> fractional_max_pool2d_outf(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef output_size, const at::Tensor & random_samples, at::Tensor & output, at::Tensor & indices);

} // namespace cpu
} // namespace at
