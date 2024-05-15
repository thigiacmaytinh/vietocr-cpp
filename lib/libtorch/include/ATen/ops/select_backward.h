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



#include <ATen/ops/select_backward_ops.h>

namespace at {


// aten::select_backward(Tensor grad_output, SymInt[] input_sizes, int dim, SymInt index) -> Tensor
inline at::Tensor select_backward(const at::Tensor & grad_output, at::IntArrayRef input_sizes, int64_t dim, int64_t index) {
    return at::_ops::select_backward::call(grad_output, c10::fromIntArrayRefSlow(input_sizes), dim, index);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor select_backward(const at::Tensor & grad_output, at::IntArrayRef input_sizes, int64_t dim, int64_t index) {
    return at::_ops::select_backward::call(grad_output, c10::fromIntArrayRefSlow(input_sizes), dim, index);
  }
}

// aten::select_backward(Tensor grad_output, SymInt[] input_sizes, int dim, SymInt index) -> Tensor
inline at::Tensor select_backward_symint(const at::Tensor & grad_output, c10::SymIntArrayRef input_sizes, int64_t dim, c10::SymInt index) {
    return at::_ops::select_backward::call(grad_output, input_sizes, dim, index);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor select_backward(const at::Tensor & grad_output, c10::SymIntArrayRef input_sizes, int64_t dim, c10::SymInt index) {
    return at::_ops::select_backward::call(grad_output, input_sizes, dim, index);
  }
}

// aten::select_backward.out(Tensor grad_output, SymInt[] input_sizes, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_backward_out(at::Tensor & out, const at::Tensor & grad_output, at::IntArrayRef input_sizes, int64_t dim, int64_t index) {
    return at::_ops::select_backward_out::call(grad_output, c10::fromIntArrayRefSlow(input_sizes), dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & select_backward_out(at::Tensor & out, const at::Tensor & grad_output, at::IntArrayRef input_sizes, int64_t dim, int64_t index) {
    return at::_ops::select_backward_out::call(grad_output, c10::fromIntArrayRefSlow(input_sizes), dim, index, out);
  }
}

// aten::select_backward.out(Tensor grad_output, SymInt[] input_sizes, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_backward_outf(const at::Tensor & grad_output, at::IntArrayRef input_sizes, int64_t dim, int64_t index, at::Tensor & out) {
    return at::_ops::select_backward_out::call(grad_output, c10::fromIntArrayRefSlow(input_sizes), dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & select_backward_outf(const at::Tensor & grad_output, at::IntArrayRef input_sizes, int64_t dim, int64_t index, at::Tensor & out) {
    return at::_ops::select_backward_out::call(grad_output, c10::fromIntArrayRefSlow(input_sizes), dim, index, out);
  }
}

// aten::select_backward.out(Tensor grad_output, SymInt[] input_sizes, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_backward_symint_out(at::Tensor & out, const at::Tensor & grad_output, c10::SymIntArrayRef input_sizes, int64_t dim, c10::SymInt index) {
    return at::_ops::select_backward_out::call(grad_output, input_sizes, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & select_backward_out(at::Tensor & out, const at::Tensor & grad_output, c10::SymIntArrayRef input_sizes, int64_t dim, c10::SymInt index) {
    return at::_ops::select_backward_out::call(grad_output, input_sizes, dim, index, out);
  }
}

// aten::select_backward.out(Tensor grad_output, SymInt[] input_sizes, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_backward_symint_outf(const at::Tensor & grad_output, c10::SymIntArrayRef input_sizes, int64_t dim, c10::SymInt index, at::Tensor & out) {
    return at::_ops::select_backward_out::call(grad_output, input_sizes, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & select_backward_outf(const at::Tensor & grad_output, c10::SymIntArrayRef input_sizes, int64_t dim, c10::SymInt index, at::Tensor & out) {
    return at::_ops::select_backward_out::call(grad_output, input_sizes, dim, index, out);
  }
}

}
