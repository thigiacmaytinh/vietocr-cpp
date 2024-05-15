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



#include <ATen/ops/linalg_tensorsolve_ops.h>

namespace at {


// aten::linalg_tensorsolve(Tensor self, Tensor other, int[]? dims=None) -> Tensor
inline at::Tensor linalg_tensorsolve(const at::Tensor & self, const at::Tensor & other, at::OptionalIntArrayRef dims=c10::nullopt) {
    return at::_ops::linalg_tensorsolve::call(self, other, dims);
}

// aten::linalg_tensorsolve.out(Tensor self, Tensor other, int[]? dims=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & linalg_tensorsolve_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other, at::OptionalIntArrayRef dims=c10::nullopt) {
    return at::_ops::linalg_tensorsolve_out::call(self, other, dims, out);
}
// aten::linalg_tensorsolve.out(Tensor self, Tensor other, int[]? dims=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & linalg_tensorsolve_outf(const at::Tensor & self, const at::Tensor & other, at::OptionalIntArrayRef dims, at::Tensor & out) {
    return at::_ops::linalg_tensorsolve_out::call(self, other, dims, out);
}

}
