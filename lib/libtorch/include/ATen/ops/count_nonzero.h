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



#include <ATen/ops/count_nonzero_ops.h>

namespace at {


// aten::count_nonzero.dim_IntList(Tensor self, int[] dim) -> Tensor
inline at::Tensor count_nonzero(const at::Tensor & self, at::IntArrayRef dim) {
    return at::_ops::count_nonzero_dim_IntList::call(self, dim);
}

// aten::count_nonzero(Tensor self, int? dim=None) -> Tensor
inline at::Tensor count_nonzero(const at::Tensor & self, c10::optional<int64_t> dim=c10::nullopt) {
    return at::_ops::count_nonzero::call(self, dim);
}

// aten::count_nonzero.dim_IntList_out(Tensor self, int[] dim, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & count_nonzero_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef dim) {
    return at::_ops::count_nonzero_dim_IntList_out::call(self, dim, out);
}
// aten::count_nonzero.dim_IntList_out(Tensor self, int[] dim, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & count_nonzero_outf(const at::Tensor & self, at::IntArrayRef dim, at::Tensor & out) {
    return at::_ops::count_nonzero_dim_IntList_out::call(self, dim, out);
}

// aten::count_nonzero.out(Tensor self, int? dim=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & count_nonzero_out(at::Tensor & out, const at::Tensor & self, c10::optional<int64_t> dim=c10::nullopt) {
    return at::_ops::count_nonzero_out::call(self, dim, out);
}
// aten::count_nonzero.out(Tensor self, int? dim=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & count_nonzero_outf(const at::Tensor & self, c10::optional<int64_t> dim, at::Tensor & out) {
    return at::_ops::count_nonzero_out::call(self, dim, out);
}

}
