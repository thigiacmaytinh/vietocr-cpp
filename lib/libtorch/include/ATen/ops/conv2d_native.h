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
TORCH_API at::Tensor conv2d_symint(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::SymIntArrayRef padding=c10::SymInt(0), c10::SymIntArrayRef dilation=c10::SymInt(1), c10::SymInt groups=1);
TORCH_API at::Tensor conv2d_padding_symint(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::string_view padding="valid", c10::SymIntArrayRef dilation=c10::SymInt(1), c10::SymInt groups=1);
} // namespace native
} // namespace at
