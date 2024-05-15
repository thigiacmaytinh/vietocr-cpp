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



#include <ATen/ops/_conv_depthwise2d_ops.h>

namespace at {


// aten::_conv_depthwise2d.out(Tensor self, Tensor weight, SymInt[2] kernel_size, Tensor? bias, SymInt[2] stride, SymInt[2] padding, SymInt[2] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline const at::Tensor & _conv_depthwise2d_out(const at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  const at::Tensor & _conv_depthwise2d_out(const at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
  }
}

// aten::_conv_depthwise2d.out(Tensor self, Tensor weight, SymInt[2] kernel_size, Tensor? bias, SymInt[2] stride, SymInt[2] padding, SymInt[2] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline const at::Tensor & _conv_depthwise2d_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, const at::Tensor & out) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  const at::Tensor & _conv_depthwise2d_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, const at::Tensor & out) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation), out);
  }
}

// aten::_conv_depthwise2d.out(Tensor self, Tensor weight, SymInt[2] kernel_size, Tensor? bias, SymInt[2] stride, SymInt[2] padding, SymInt[2] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline const at::Tensor & _conv_depthwise2d_symint_out(const at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  const at::Tensor & _conv_depthwise2d_out(const at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
  }
}

// aten::_conv_depthwise2d.out(Tensor self, Tensor weight, SymInt[2] kernel_size, Tensor? bias, SymInt[2] stride, SymInt[2] padding, SymInt[2] dilation, *, Tensor(a!) out) -> Tensor(a!)
inline const at::Tensor & _conv_depthwise2d_symint_outf(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, const at::Tensor & out) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  const at::Tensor & _conv_depthwise2d_outf(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation, const at::Tensor & out) {
    return at::_ops::_conv_depthwise2d_out::call(self, weight, kernel_size, bias, stride, padding, dilation, out);
  }
}

// aten::_conv_depthwise2d(Tensor self, Tensor weight, SymInt[2] kernel_size, Tensor? bias, SymInt[2] stride, SymInt[2] padding, SymInt[2] dilation) -> Tensor
inline at::Tensor _conv_depthwise2d(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _conv_depthwise2d(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), c10::fromIntArrayRefSlow(dilation));
  }
}

// aten::_conv_depthwise2d(Tensor self, Tensor weight, SymInt[2] kernel_size, Tensor? bias, SymInt[2] stride, SymInt[2] padding, SymInt[2] dilation) -> Tensor
inline at::Tensor _conv_depthwise2d_symint(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d::call(self, weight, kernel_size, bias, stride, padding, dilation);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _conv_depthwise2d(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, c10::SymIntArrayRef dilation) {
    return at::_ops::_conv_depthwise2d::call(self, weight, kernel_size, bias, stride, padding, dilation);
  }
}

}
