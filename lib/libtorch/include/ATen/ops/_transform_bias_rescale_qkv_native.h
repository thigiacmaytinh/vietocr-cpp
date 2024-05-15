#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _transform_bias_rescale_qkv_out(const at::Tensor & qkv, const at::Tensor & qkv_bias, int64_t num_heads, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> transform_bias_rescale_qkv_cpu(const at::Tensor & qkv, const at::Tensor & qkv_bias, int64_t num_heads);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> transform_bias_rescale_qkv_cuda(const at::Tensor & qkv, const at::Tensor & qkv_bias, int64_t num_heads);
} // namespace native
} // namespace at
