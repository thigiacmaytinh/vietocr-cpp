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



#include <ATen/ops/batch_norm_elemt_ops.h>

namespace at {


// aten::batch_norm_elemt(Tensor input, Tensor? weight, Tensor? bias, Tensor mean, Tensor invstd, float eps) -> Tensor
inline at::Tensor batch_norm_elemt(const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & mean, const at::Tensor & invstd, double eps) {
    return at::_ops::batch_norm_elemt::call(input, weight, bias, mean, invstd, eps);
}

// aten::batch_norm_elemt.out(Tensor input, Tensor? weight, Tensor? bias, Tensor mean, Tensor invstd, float eps, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & batch_norm_elemt_out(at::Tensor & out, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & mean, const at::Tensor & invstd, double eps) {
    return at::_ops::batch_norm_elemt_out::call(input, weight, bias, mean, invstd, eps, out);
}
// aten::batch_norm_elemt.out(Tensor input, Tensor? weight, Tensor? bias, Tensor mean, Tensor invstd, float eps, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & batch_norm_elemt_outf(const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & mean, const at::Tensor & invstd, double eps, at::Tensor & out) {
    return at::_ops::batch_norm_elemt_out::call(input, weight, bias, mean, invstd, eps, out);
}

}
