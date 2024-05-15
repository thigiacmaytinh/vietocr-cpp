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



#include <ATen/ops/slow_conv3d_ops.h>

namespace at {


// aten::slow_conv3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & slow_conv3d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, at::IntArrayRef stride=1, at::IntArrayRef padding=0) {
    return at::_ops::slow_conv3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & slow_conv3d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, at::IntArrayRef stride=1, at::IntArrayRef padding=0) {
    return at::_ops::slow_conv3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), out);
  }
}

// aten::slow_conv3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & slow_conv3d_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & out) {
    return at::_ops::slow_conv3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & slow_conv3d_outf(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, at::IntArrayRef stride, at::IntArrayRef padding, at::Tensor & out) {
    return at::_ops::slow_conv3d_out::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding), out);
  }
}

// aten::slow_conv3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & slow_conv3d_symint_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::SymIntArrayRef padding=c10::SymInt(0)) {
    return at::_ops::slow_conv3d_out::call(self, weight, kernel_size, bias, stride, padding, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & slow_conv3d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::SymIntArrayRef padding=c10::SymInt(0)) {
    return at::_ops::slow_conv3d_out::call(self, weight, kernel_size, bias, stride, padding, out);
  }
}

// aten::slow_conv3d.out(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & slow_conv3d_symint_outf(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, at::Tensor & out) {
    return at::_ops::slow_conv3d_out::call(self, weight, kernel_size, bias, stride, padding, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & slow_conv3d_outf(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::SymIntArrayRef padding, at::Tensor & out) {
    return at::_ops::slow_conv3d_out::call(self, weight, kernel_size, bias, stride, padding, out);
  }
}

// aten::slow_conv3d(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0) -> Tensor
inline at::Tensor slow_conv3d(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, at::IntArrayRef stride=1, at::IntArrayRef padding=0) {
    return at::_ops::slow_conv3d::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor slow_conv3d(const at::Tensor & self, const at::Tensor & weight, at::IntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, at::IntArrayRef stride=1, at::IntArrayRef padding=0) {
    return at::_ops::slow_conv3d::call(self, weight, c10::fromIntArrayRefSlow(kernel_size), bias, c10::fromIntArrayRefSlow(stride), c10::fromIntArrayRefSlow(padding));
  }
}

// aten::slow_conv3d(Tensor self, Tensor weight, SymInt[3] kernel_size, Tensor? bias=None, SymInt[3] stride=1, SymInt[3] padding=0) -> Tensor
inline at::Tensor slow_conv3d_symint(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::SymIntArrayRef padding=c10::SymInt(0)) {
    return at::_ops::slow_conv3d::call(self, weight, kernel_size, bias, stride, padding);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor slow_conv3d(const at::Tensor & self, const at::Tensor & weight, c10::SymIntArrayRef kernel_size, const c10::optional<at::Tensor> & bias={}, c10::SymIntArrayRef stride=c10::SymInt(1), c10::SymIntArrayRef padding=c10::SymInt(0)) {
    return at::_ops::slow_conv3d::call(self, weight, kernel_size, bias, stride, padding);
  }
}

}
