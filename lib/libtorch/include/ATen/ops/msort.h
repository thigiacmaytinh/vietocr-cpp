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



#include <ATen/ops/msort_ops.h>

namespace at {


// aten::msort.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & msort_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::msort_out::call(self, out);
}
// aten::msort.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & msort_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::msort_out::call(self, out);
}

// aten::msort(Tensor self) -> Tensor
inline at::Tensor msort(const at::Tensor & self) {
    return at::_ops::msort::call(self);
}

}
