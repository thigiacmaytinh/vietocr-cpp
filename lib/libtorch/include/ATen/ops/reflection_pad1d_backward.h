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



#include <ATen/ops/reflection_pad1d_backward_ops.h>

namespace at {


// aten::reflection_pad1d_backward.grad_input(Tensor grad_output, Tensor self, SymInt[2] padding, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & reflection_pad1d_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, c10::fromIntArrayRefSlow(padding), grad_input);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & reflection_pad1d_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, c10::fromIntArrayRefSlow(padding), grad_input);
  }
}

// aten::reflection_pad1d_backward.grad_input(Tensor grad_output, Tensor self, SymInt[2] padding, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & reflection_pad1d_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, c10::fromIntArrayRefSlow(padding), grad_input);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & reflection_pad1d_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, c10::fromIntArrayRefSlow(padding), grad_input);
  }
}

// aten::reflection_pad1d_backward.grad_input(Tensor grad_output, Tensor self, SymInt[2] padding, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & reflection_pad1d_backward_symint_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, padding, grad_input);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & reflection_pad1d_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, padding, grad_input);
  }
}

// aten::reflection_pad1d_backward.grad_input(Tensor grad_output, Tensor self, SymInt[2] padding, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & reflection_pad1d_backward_symint_outf(const at::Tensor & grad_output, const at::Tensor & self, c10::SymIntArrayRef padding, at::Tensor & grad_input) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, padding, grad_input);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & reflection_pad1d_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, c10::SymIntArrayRef padding, at::Tensor & grad_input) {
    return at::_ops::reflection_pad1d_backward_grad_input::call(grad_output, self, padding, grad_input);
  }
}

// aten::reflection_pad1d_backward(Tensor grad_output, Tensor self, SymInt[2] padding) -> Tensor
inline at::Tensor reflection_pad1d_backward(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward::call(grad_output, self, c10::fromIntArrayRefSlow(padding));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor reflection_pad1d_backward(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward::call(grad_output, self, c10::fromIntArrayRefSlow(padding));
  }
}

// aten::reflection_pad1d_backward(Tensor grad_output, Tensor self, SymInt[2] padding) -> Tensor
inline at::Tensor reflection_pad1d_backward_symint(const at::Tensor & grad_output, const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward::call(grad_output, self, padding);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor reflection_pad1d_backward(const at::Tensor & grad_output, const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::reflection_pad1d_backward::call(grad_output, self, padding);
  }
}

}
