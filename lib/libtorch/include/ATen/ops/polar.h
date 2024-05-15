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



#include <ATen/ops/polar_ops.h>

namespace at {


// aten::polar(Tensor abs, Tensor angle) -> Tensor
inline at::Tensor polar(const at::Tensor & abs, const at::Tensor & angle) {
    return at::_ops::polar::call(abs, angle);
}

// aten::polar.out(Tensor abs, Tensor angle, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & polar_out(at::Tensor & out, const at::Tensor & abs, const at::Tensor & angle) {
    return at::_ops::polar_out::call(abs, angle, out);
}
// aten::polar.out(Tensor abs, Tensor angle, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & polar_outf(const at::Tensor & abs, const at::Tensor & angle, at::Tensor & out) {
    return at::_ops::polar_out::call(abs, angle, out);
}

}
