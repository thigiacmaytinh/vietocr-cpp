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



#include <ATen/ops/replication_pad3d_ops.h>

namespace at {


// aten::replication_pad3d.out(Tensor self, SymInt[6] padding, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & replication_pad3d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::replication_pad3d_out::call(self, c10::fromIntArrayRefSlow(padding), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & replication_pad3d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::replication_pad3d_out::call(self, c10::fromIntArrayRefSlow(padding), out);
  }
}

// aten::replication_pad3d.out(Tensor self, SymInt[6] padding, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & replication_pad3d_outf(const at::Tensor & self, at::IntArrayRef padding, at::Tensor & out) {
    return at::_ops::replication_pad3d_out::call(self, c10::fromIntArrayRefSlow(padding), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & replication_pad3d_outf(const at::Tensor & self, at::IntArrayRef padding, at::Tensor & out) {
    return at::_ops::replication_pad3d_out::call(self, c10::fromIntArrayRefSlow(padding), out);
  }
}

// aten::replication_pad3d.out(Tensor self, SymInt[6] padding, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & replication_pad3d_symint_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::replication_pad3d_out::call(self, padding, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & replication_pad3d_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::replication_pad3d_out::call(self, padding, out);
  }
}

// aten::replication_pad3d.out(Tensor self, SymInt[6] padding, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & replication_pad3d_symint_outf(const at::Tensor & self, c10::SymIntArrayRef padding, at::Tensor & out) {
    return at::_ops::replication_pad3d_out::call(self, padding, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & replication_pad3d_outf(const at::Tensor & self, c10::SymIntArrayRef padding, at::Tensor & out) {
    return at::_ops::replication_pad3d_out::call(self, padding, out);
  }
}

// aten::replication_pad3d(Tensor self, SymInt[6] padding) -> Tensor
inline at::Tensor replication_pad3d(const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::replication_pad3d::call(self, c10::fromIntArrayRefSlow(padding));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor replication_pad3d(const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::replication_pad3d::call(self, c10::fromIntArrayRefSlow(padding));
  }
}

// aten::replication_pad3d(Tensor self, SymInt[6] padding) -> Tensor
inline at::Tensor replication_pad3d_symint(const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::replication_pad3d::call(self, padding);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor replication_pad3d(const at::Tensor & self, c10::SymIntArrayRef padding) {
    return at::_ops::replication_pad3d::call(self, padding);
  }
}

}
