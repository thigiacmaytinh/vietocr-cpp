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
TORCH_API at::Tensor binary_cross_entropy_with_logits(const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight={}, const c10::optional<at::Tensor> & pos_weight={}, int64_t reduction=at::Reduction::Mean);
TORCH_API at::Tensor & binary_cross_entropy_with_logits_out(const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & pos_weight, int64_t reduction, at::Tensor & out);
} // namespace native
} // namespace at
