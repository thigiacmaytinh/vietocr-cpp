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
TORCH_API void _foreach_ceil_out(at::TensorList self, at::TensorList out);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_ceil_slow(at::TensorList self);
TORCH_API void foreach_tensor_ceil_slow_(at::TensorList self);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_ceil_cuda(at::TensorList self);
TORCH_API void foreach_tensor_ceil_cuda_(at::TensorList self);
} // namespace native
} // namespace at
