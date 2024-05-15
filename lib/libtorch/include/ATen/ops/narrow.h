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



#include <ATen/ops/narrow_ops.h>

namespace at {


// aten::narrow(Tensor(a) self, int dim, SymInt start, SymInt length) -> Tensor(a)
inline at::Tensor narrow(const at::Tensor & self, int64_t dim, int64_t start, int64_t length) {
    return at::_ops::narrow::call(self, dim, start, length);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor narrow(const at::Tensor & self, int64_t dim, int64_t start, int64_t length) {
    return at::_ops::narrow::call(self, dim, start, length);
  }
}

// aten::narrow(Tensor(a) self, int dim, SymInt start, SymInt length) -> Tensor(a)
inline at::Tensor narrow_symint(const at::Tensor & self, int64_t dim, c10::SymInt start, c10::SymInt length) {
    return at::_ops::narrow::call(self, dim, start, length);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor narrow(const at::Tensor & self, int64_t dim, c10::SymInt start, c10::SymInt length) {
    return at::_ops::narrow::call(self, dim, start, length);
  }
}

// aten::narrow.Tensor(Tensor(a) self, int dim, Tensor start, SymInt length) -> Tensor(a)
inline at::Tensor narrow(const at::Tensor & self, int64_t dim, const at::Tensor & start, int64_t length) {
    return at::_ops::narrow_Tensor::call(self, dim, start, length);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor narrow(const at::Tensor & self, int64_t dim, const at::Tensor & start, int64_t length) {
    return at::_ops::narrow_Tensor::call(self, dim, start, length);
  }
}

// aten::narrow.Tensor(Tensor(a) self, int dim, Tensor start, SymInt length) -> Tensor(a)
inline at::Tensor narrow_symint(const at::Tensor & self, int64_t dim, const at::Tensor & start, c10::SymInt length) {
    return at::_ops::narrow_Tensor::call(self, dim, start, length);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor narrow(const at::Tensor & self, int64_t dim, const at::Tensor & start, c10::SymInt length) {
    return at::_ops::narrow_Tensor::call(self, dim, start, length);
  }
}

}
