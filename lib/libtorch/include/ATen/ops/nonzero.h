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



#include <ATen/ops/nonzero_ops.h>

namespace at {


// aten::nonzero.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & nonzero_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::nonzero_out::call(self, out);
}
// aten::nonzero.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & nonzero_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::nonzero_out::call(self, out);
}

// aten::nonzero(Tensor self) -> Tensor
inline at::Tensor nonzero(const at::Tensor & self) {
    return at::_ops::nonzero::call(self);
}

}
