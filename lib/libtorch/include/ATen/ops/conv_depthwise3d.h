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



#include <ATen/ops/conv_depthwise3d_ops.h>

namespace at {


// aten::conv_depthwise3d(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias, SymInt[3] stride, SymInt[3] padding, SymInt[3] dilation) -> Tensor
inline at::Tensor conv_depthwise3d(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::conv_depthwise3d::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor conv_depthwise3d(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::conv_depthwise3d::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation));
  }
}

// aten::conv_depthwise3d(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias, SymInt[3] stride, SymInt[3] padding, SymInt[3] dilation) -> Tensor
inline at::Tensor conv_depthwise3d_symint(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::conv_depthwise3d::call(self, weight, kernel_size, bias, stride, padding, dilation);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor conv_depthwise3d(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::conv_depthwise3d::call(self, weight, kernel_size, bias, stride, padding, dilation);
  }
}

// aten::conv_depthwise3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias, SymInt[3] stride, SymInt[3] padding, SymInt[3] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & conv_depthwise3d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & conv_depthwise3d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
  }
}

// aten::conv_depthwise3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias, SymInt[3] stride, SymInt[3] padding, SymInt[3] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & conv_depthwise3d_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, at::Tensor & out) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & conv_depthwise3d_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, at::Tensor & out) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
  }
}

// aten::conv_depthwise3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias, SymInt[3] stride, SymInt[3] padding, SymInt[3] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & conv_depthwise3d_symint_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & conv_depthwise3d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
  }
}

// aten::conv_depthwise3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias, SymInt[3] stride, SymInt[3] padding, SymInt[3] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & conv_depthwise3d_symint_outf(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, at::Tensor & out) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & conv_depthwise3d_outf(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, at::Tensor & out) {
    return at::_ops::conv_depthwise3d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
  }
}

}
