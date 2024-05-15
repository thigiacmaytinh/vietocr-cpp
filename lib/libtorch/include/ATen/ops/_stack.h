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



#include <ATen/ops/_stack_ops.h>

namespace at {


// aten::_stack(Tensor[] tensors, int dim=0) -> Tensor
inline at::Tensor _stack(at::TensorList tensors, int64_t dim=0) {
    return at::_ops::_stack::call(tensors, dim);
}

// aten::_stack.out(Tensor[] tensors, int dim=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _stack_out(at::Tensor & out, at::TensorList tensors, int64_t dim=0) {
    return at::_ops::_stack_out::call(tensors, dim, out);
}
// aten::_stack.out(Tensor[] tensors, int dim=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _stack_outf(at::TensorList tensors, int64_t dim, at::Tensor & out) {
    return at::_ops::_stack_out::call(tensors, dim, out);
}

}
