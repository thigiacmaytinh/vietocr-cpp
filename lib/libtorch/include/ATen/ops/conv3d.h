#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/conv3d_ops.h>

namespace at {


// aten::conv3d(Tensor input, Tensor weight, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0, SymInt[3] dilation=1, SymInt groups=1) -> Tensor
inline at::Tensor conv3d(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias={}, at::IntArrayRef stride=1, at::IntArrayRef padding=0, at::IntArrayRef dilation=1, int64_t groups=1) {
    return at::_ops::conv3d::call(input, weight, bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), groups);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor conv3d(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias={}, at::IntArrayRef stride=1, at::IntArrayRef padding=0, at::IntArrayRef dilation=1, int64_t groups=1) {
    return at::_ops::conv3d::call(input, weight, bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), groups);
  }
}

// aten::conv3d(Tensor input, Tensor weight, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0, SymInt[3] dilation=1, SymInt groups=1) -> Tensor
inline at::Tensor conv3d_symint(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::SymIntArrayRef padding=c10::SymInt(0), c10::SymIntArrayRef dilation=c10::SymInt(1), c10::SymInt groups=1) {
    return at::_ops::conv3d::call(input, weight, bias, stride, padding, dilation, groups);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor conv3d(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::SymIntArrayRef padding=c10::SymInt(0), c10::SymIntArrayRef dilation=c10::SymInt(1), c10::SymInt groups=1) {
    return at::_ops::conv3d::call(input, weight, bias, stride, padding, dilation, groups);
  }
}

// aten::conv3d.padding(Tensor input, Tensor weight, Tensor? bias=None, SymInt[3] stride=1, str padding="valid", SymInt[3] dilation=1, SymInt groups=1) -> Tensor
inline at::Tensor conv3d(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, c10::string_view padding, at::IntArrayRef dilation=1, int64_t groups=1) {
    return at::_ops::conv3d_padding::call(input, weight, bias, c10::fromIntArrayRefSlow(stride), padding, c10::fromIntArrayRefSlow(dilation), groups);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor conv3d(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, c10::string_view padding, at::IntArrayRef dilation=1, int64_t groups=1) {
    return at::_ops::conv3d_padding::call(input, weight, bias, c10::fromIntArrayRefSlow(stride), padding, c10::fromIntArrayRefSlow(dilation), groups);
  }
}

// aten::conv3d.padding(Tensor input, Tensor weight, Tensor? bias=None, SymInt[3] stride=1, str padding="valid", SymInt[3] dilation=1, SymInt groups=1) -> Tensor
inline at::Tensor conv3d_symint(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::string_view padding, c10::SymIntArrayRef dilation=c10::SymInt(1), c10::SymInt groups=1) {
    return at::_ops::conv3d_padding::call(input, weight, bias, stride, padding, dilation, groups);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor conv3d(const at::Tensor & input, const at::Tensor & weight, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::string_view padding, c10::SymIntArrayRef dilation=c10::SymInt(1), c10::SymInt groups=1) {
    return at::_ops::conv3d_padding::call(input, weight, bias, stride, padding, dilation, groups);
  }
}

}
