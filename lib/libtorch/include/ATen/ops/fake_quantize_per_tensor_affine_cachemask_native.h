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
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> fake_quantize_per_tensor_affine_cachemask_out(const at::Tensor & self, double scale, int64_t zero_point, int64_t quant_min, int64_t quant_max, at::Tensor & out0, at::Tensor & out1);
TORCH_API ::std::tuple<at::Tensor,at::Tensor> fake_quantize_per_tensor_affine_cachemask(const at::Tensor & self, double scale, int64_t zero_point, int64_t quant_min, int64_t quant_max);
} // namespace native
} // namespace at
