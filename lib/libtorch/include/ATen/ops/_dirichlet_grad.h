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



#include <ATen/ops/_dirichlet_grad_ops.h>

namespace at {


// aten::_dirichlet_grad(Tensor x, Tensor alpha, Tensor total) -> Tensor
inline at::Tensor _dirichlet_grad(const at::Tensor & x, const at::Tensor & alpha, const at::Tensor & total) {
    return at::_ops::_dirichlet_grad::call(x, alpha, total);
}

// aten::_dirichlet_grad.out(Tensor x, Tensor alpha, Tensor total, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _dirichlet_grad_out(at::Tensor & out, const at::Tensor & x, const at::Tensor & alpha, const at::Tensor & total) {
    return at::_ops::_dirichlet_grad_out::call(x, alpha, total, out);
}
// aten::_dirichlet_grad.out(Tensor x, Tensor alpha, Tensor total, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _dirichlet_grad_outf(const at::Tensor & x, const at::Tensor & alpha, const at::Tensor & total, at::Tensor & out) {
    return at::_ops::_dirichlet_grad_out::call(x, alpha, total, out);
}

}
