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



#include <ATen/ops/_native_batch_norm_legit_no_training_ops.h>

namespace at {


// aten::_native_batch_norm_legit_no_training(Tensor input, Tensor? weight, Tensor? bias, Tensor running_mean, Tensor running_var, float momentum, float eps) -> (Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _native_batch_norm_legit_no_training(const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & running_mean, const at::Tensor & running_var, double momentum, double eps) {
    return at::_ops::_native_batch_norm_legit_no_training::call(input, weight, bias, running_mean, running_var, momentum, eps);
}

// aten::_native_batch_norm_legit_no_training.out(Tensor input, Tensor? weight, Tensor? bias, Tensor running_mean, Tensor running_var, float momentum, float eps, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2) -> (Tensor(a!), Tensor(b!), Tensor(c!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _native_batch_norm_legit_no_training_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & running_mean, const at::Tensor & running_var, double momentum, double eps) {
    return at::_ops::_native_batch_norm_legit_no_training_out::call(input, weight, bias, running_mean, running_var, momentum, eps, out0, out1, out2);
}
// aten::_native_batch_norm_legit_no_training.out(Tensor input, Tensor? weight, Tensor? bias, Tensor running_mean, Tensor running_var, float momentum, float eps, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2) -> (Tensor(a!), Tensor(b!), Tensor(c!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _native_batch_norm_legit_no_training_outf(const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & running_mean, const at::Tensor & running_var, double momentum, double eps, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2) {
    return at::_ops::_native_batch_norm_legit_no_training_out::call(input, weight, bias, running_mean, running_var, momentum, eps, out0, out1, out2);
}

}
