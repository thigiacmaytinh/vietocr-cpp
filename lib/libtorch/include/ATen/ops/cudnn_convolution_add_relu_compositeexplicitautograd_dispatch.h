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

TORCH_API at::Tensor & cudnn_convolution_add_relu_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups);
TORCH_API at::Tensor & cudnn_convolution_add_relu_outf(const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, int64_t groups, at::Tensor & out);
TORCH_API at::Tensor & cudnn_convolution_add_relu_symint_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, c10::SymInt groups);
TORCH_API at::Tensor & cudnn_convolution_add_relu_symint_outf(const at::Tensor & self, const at::Tensor & weight, const at::Tensor & z, const c10::optional<at::Scalar> & alpha, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, c10::SymInt groups, at::Tensor & out);

} // namespace compositeexplicitautograd
} // namespace at
