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

TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> mps_convolution_transpose_backward_out(at::Tensor & out0, at::Tensor & out1, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, ::std::array<bool,2> output_mask);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> mps_convolution_transpose_backward_outf(const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, at::IntArrayRef padding, at::IntArrayRef output_padding, at::IntArrayRef stride, at::IntArrayRef dilation, int64_t groups, ::std::array<bool,2> output_mask, at::Tensor & out0, at::Tensor & out1);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> mps_convolution_transpose_backward_symint_out(at::Tensor & out0, at::Tensor & out1, const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, c10::SymIntArrayRef padding, c10::SymIntArrayRef output_padding, c10::SymIntArrayRef stride, c10::SymIntArrayRef dilation, c10::SymInt groups, ::std::array<bool,2> output_mask);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> mps_convolution_transpose_backward_symint_outf(const at::Tensor & self, const at::Tensor & grad_output, const at::Tensor & weight, c10::SymIntArrayRef padding, c10::SymIntArrayRef output_padding, c10::SymIntArrayRef stride, c10::SymIntArrayRef dilation, c10::SymInt groups, ::std::array<bool,2> output_mask, at::Tensor & out0, at::Tensor & out1);

} // namespace compositeexplicitautograd
} // namespace at
