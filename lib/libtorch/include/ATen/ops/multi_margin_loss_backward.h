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



#include <ATen/ops/multi_margin_loss_backward_ops.h>

namespace at {


// aten::multi_margin_loss_backward.grad_input(Tensor grad_output, Tensor self, Tensor target, Scalar p, Scalar margin, Tensor? weight=None, int reduction=Mean, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & multi_margin_loss_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const at::Scalar & p, const at::Scalar & margin, const c10::optional<at::Tensor> & weight={}, int64_t reduction=at::Reduction::Mean) {
    return at::_ops::multi_margin_loss_backward_grad_input::call(grad_output, self, target, p, margin, weight, reduction, grad_input);
}
// aten::multi_margin_loss_backward.grad_input(Tensor grad_output, Tensor self, Tensor target, Scalar p, Scalar margin, Tensor? weight=None, int reduction=Mean, *, Tensor(a!) grad_input) -> Tensor(a!)
inline at::Tensor & multi_margin_loss_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const at::Scalar & p, const at::Scalar & margin, const c10::optional<at::Tensor> & weight, int64_t reduction, at::Tensor & grad_input) {
    return at::_ops::multi_margin_loss_backward_grad_input::call(grad_output, self, target, p, margin, weight, reduction, grad_input);
}

// aten::multi_margin_loss_backward(Tensor grad_output, Tensor self, Tensor target, Scalar p, Scalar margin, Tensor? weight=None, int reduction=Mean) -> Tensor
inline at::Tensor multi_margin_loss_backward(const at::Tensor & grad_output, const at::Tensor & self, const at::Tensor & target, const at::Scalar & p, const at::Scalar & margin, const c10::optional<at::Tensor> & weight={}, int64_t reduction=at::Reduction::Mean) {
    return at::_ops::multi_margin_loss_backward::call(grad_output, self, target, p, margin, weight, reduction);
}

}
