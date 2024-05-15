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



#include <ATen/ops/heaviside_ops.h>

namespace at {


// aten::heaviside.out(Tensor self, Tensor values, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & heaviside_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & values) {
    return at::_ops::heaviside_out::call(self, values, out);
}
// aten::heaviside.out(Tensor self, Tensor values, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & heaviside_outf(const at::Tensor & self, const at::Tensor & values, at::Tensor & out) {
    return at::_ops::heaviside_out::call(self, values, out);
}

// aten::heaviside(Tensor self, Tensor values) -> Tensor
inline at::Tensor heaviside(const at::Tensor & self, const at::Tensor & values) {
    return at::_ops::heaviside::call(self, values);
}

}
