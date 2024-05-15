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



#include <ATen/ops/select_copy_ops.h>

namespace at {


// aten::select_copy.int(Tensor self, int dim, SymInt index) -> Tensor
inline at::Tensor select_copy(const at::Tensor & self, int64_t dim, int64_t index) {
    return at::_ops::select_copy_int::call(self, dim, index);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor select_copy(const at::Tensor & self, int64_t dim, int64_t index) {
    return at::_ops::select_copy_int::call(self, dim, index);
  }
}

// aten::select_copy.int(Tensor self, int dim, SymInt index) -> Tensor
inline at::Tensor select_copy_symint(const at::Tensor & self, int64_t dim, c10::SymInt index) {
    return at::_ops::select_copy_int::call(self, dim, index);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor select_copy(const at::Tensor & self, int64_t dim, c10::SymInt index) {
    return at::_ops::select_copy_int::call(self, dim, index);
  }
}

// aten::select_copy.int_out(Tensor self, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_copy_out(at::Tensor & out, const at::Tensor & self, int64_t dim, int64_t index) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & select_copy_out(at::Tensor & out, const at::Tensor & self, int64_t dim, int64_t index) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
  }
}

// aten::select_copy.int_out(Tensor self, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_copy_outf(const at::Tensor & self, int64_t dim, int64_t index, at::Tensor & out) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & select_copy_outf(const at::Tensor & self, int64_t dim, int64_t index, at::Tensor & out) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
  }
}

// aten::select_copy.int_out(Tensor self, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_copy_symint_out(at::Tensor & out, const at::Tensor & self, int64_t dim, c10::SymInt index) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & select_copy_out(at::Tensor & out, const at::Tensor & self, int64_t dim, c10::SymInt index) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
  }
}

// aten::select_copy.int_out(Tensor self, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_copy_symint_outf(const at::Tensor & self, int64_t dim, c10::SymInt index, at::Tensor & out) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & select_copy_outf(const at::Tensor & self, int64_t dim, c10::SymInt index, at::Tensor & out) {
    return at::_ops::select_copy_int_out::call(self, dim, index, out);
  }
}

}
