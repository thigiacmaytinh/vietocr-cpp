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



#include <ATen/ops/select_scatter_ops.h>

namespace at {


// aten::select_scatter(Tensor self, Tensor src, int dim, SymInt index) -> Tensor
inline at::Tensor select_scatter(const at::Tensor & self, const at::Tensor & src, int64_t dim, int64_t index) {
    return at::_ops::select_scatter::call(self, src, dim, index);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor select_scatter(const at::Tensor & self, const at::Tensor & src, int64_t dim, int64_t index) {
    return at::_ops::select_scatter::call(self, src, dim, index);
  }
}

// aten::select_scatter(Tensor self, Tensor src, int dim, SymInt index) -> Tensor
inline at::Tensor select_scatter_symint(const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::SymInt index) {
    return at::_ops::select_scatter::call(self, src, dim, index);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor select_scatter(const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::SymInt index) {
    return at::_ops::select_scatter::call(self, src, dim, index);
  }
}

// aten::select_scatter.out(Tensor self, Tensor src, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_scatter_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & src, int64_t dim, int64_t index) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & select_scatter_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & src, int64_t dim, int64_t index) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
  }
}

// aten::select_scatter.out(Tensor self, Tensor src, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_scatter_outf(const at::Tensor & self, const at::Tensor & src, int64_t dim, int64_t index, at::Tensor & out) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & select_scatter_outf(const at::Tensor & self, const at::Tensor & src, int64_t dim, int64_t index, at::Tensor & out) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
  }
}

// aten::select_scatter.out(Tensor self, Tensor src, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_scatter_symint_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::SymInt index) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & select_scatter_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::SymInt index) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
  }
}

// aten::select_scatter.out(Tensor self, Tensor src, int dim, SymInt index, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & select_scatter_symint_outf(const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::SymInt index, at::Tensor & out) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & select_scatter_outf(const at::Tensor & self, const at::Tensor & src, int64_t dim, c10::SymInt index, at::Tensor & out) {
    return at::_ops::select_scatter_out::call(self, src, dim, index, out);
  }
}

}
