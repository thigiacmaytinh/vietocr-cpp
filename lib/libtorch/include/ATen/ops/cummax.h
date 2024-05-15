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



#include <ATen/ops/cummax_ops.h>

namespace at {


// aten::cummax(Tensor self, int dim) -> (Tensor values, Tensor indices)
inline ::std::tuple<at::Tensor,at::Tensor> cummax(const at::Tensor & self, int64_t dim) {
    return at::_ops::cummax::call(self, dim);
}

// aten::cummax.out(Tensor self, int dim, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> cummax_out(at::Tensor & values, at::Tensor & indices, const at::Tensor & self, int64_t dim) {
    return at::_ops::cummax_out::call(self, dim, values, indices);
}
// aten::cummax.out(Tensor self, int dim, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> cummax_outf(const at::Tensor & self, int64_t dim, at::Tensor & values, at::Tensor & indices) {
    return at::_ops::cummax_out::call(self, dim, values, indices);
}

// aten::cummax.dimname(Tensor self, Dimname dim) -> (Tensor values, Tensor indices)
inline ::std::tuple<at::Tensor,at::Tensor> cummax(const at::Tensor & self, at::Dimname dim) {
    return at::_ops::cummax_dimname::call(self, dim);
}

// aten::cummax.dimname_out(Tensor self, Dimname dim, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> cummax_out(at::Tensor & values, at::Tensor & indices, const at::Tensor & self, at::Dimname dim) {
    return at::_ops::cummax_dimname_out::call(self, dim, values, indices);
}
// aten::cummax.dimname_out(Tensor self, Dimname dim, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)
inline ::std::tuple<at::Tensor &,at::Tensor &> cummax_outf(const at::Tensor & self, at::Dimname dim, at::Tensor & values, at::Tensor & indices) {
    return at::_ops::cummax_dimname_out::call(self, dim, values, indices);
}

}
