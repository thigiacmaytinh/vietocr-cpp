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



#include <ATen/ops/addcdiv_ops.h>

namespace at {


// aten::addcdiv.out(Tensor self, Tensor tensor1, Tensor tensor2, *, Scalar value=1, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & addcdiv_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value=1) {
    return at::_ops::addcdiv_out::call(self, tensor1, tensor2, value, out);
}
// aten::addcdiv.out(Tensor self, Tensor tensor1, Tensor tensor2, *, Scalar value=1, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & addcdiv_outf(const at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value, at::Tensor & out) {
    return at::_ops::addcdiv_out::call(self, tensor1, tensor2, value, out);
}

// aten::addcdiv(Tensor self, Tensor tensor1, Tensor tensor2, *, Scalar value=1) -> Tensor
inline at::Tensor addcdiv(const at::Tensor & self, const at::Tensor & tensor1, const at::Tensor & tensor2, const at::Scalar & value=1) {
    return at::_ops::addcdiv::call(self, tensor1, tensor2, value);
}

}
