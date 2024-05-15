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
#include <ATen/ops/fractional_max_pool3d_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_fractional_max_pool3d_out_cpu : public at::meta::structured_fractional_max_pool3d {
void impl(const at::Tensor & self, int64_t poolSizeT, int64_t poolSizeH, int64_t poolSizeW, int64_t outputT, int64_t outputH, int64_t outputW, const at::Tensor & random_samples, int64_t numBatch, int64_t numPlanes, int64_t inputT, int64_t inputH, int64_t inputW, const at::Tensor & output, const at::Tensor & indices);
};
struct TORCH_API structured_fractional_max_pool3d_out_cuda : public at::meta::structured_fractional_max_pool3d {
void impl(const at::Tensor & self, int64_t poolSizeT, int64_t poolSizeH, int64_t poolSizeW, int64_t outputT, int64_t outputH, int64_t outputW, const at::Tensor & random_samples, int64_t numBatch, int64_t numPlanes, int64_t inputT, int64_t inputH, int64_t inputW, const at::Tensor & output, const at::Tensor & indices);
};
} // namespace native
} // namespace at
