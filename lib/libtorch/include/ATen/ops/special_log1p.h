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



#include <ATen/ops/special_log1p_ops.h>

namespace at {


// aten::special_log1p(Tensor self) -> Tensor
inline at::Tensor special_log1p(const at::Tensor & self) {
    return at::_ops::special_log1p::call(self);
}

// aten::special_log1p.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_log1p_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::special_log1p_out::call(self, out);
}
// aten::special_log1p.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_log1p_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::special_log1p_out::call(self, out);
}

}
