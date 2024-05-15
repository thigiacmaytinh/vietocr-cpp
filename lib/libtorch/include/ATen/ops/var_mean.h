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



#include <ATen/ops/var_mean_ops.h>

namespace at {


// aten::var_mean(Tensor self, bool unbiased=True) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> var_mean(const at::Tensor & self, bool unbiased) {
    return at::_ops::var_mean::call(self, unbiased);
}

// aten::var_mean.dim(Tensor self, int[1]? dim, bool unbiased=True, bool keepdim=False) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> var_mean(const at::Tensor & self, at::OptionalIntArrayRef dim, bool unbiased, bool keepdim=false) {
    return at::_ops::var_mean_dim::call(self, dim, unbiased, keepdim);
}

// aten::var_mean.correction(Tensor self, int[1]? dim=None, *, Scalar? correction=None, bool keepdim=False) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> var_mean(const at::Tensor & self, at::OptionalIntArrayRef dim=c10::nullopt, const c10::optional<at::Scalar> & correction=c10::nullopt, bool keepdim=false) {
    return at::_ops::var_mean_correction::call(self, dim, correction, keepdim);
}

// aten::var_mean.names_dim(Tensor self, Dimname[1] dim, bool unbiased=True, bool keepdim=False) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> var_mean(const at::Tensor & self, at::DimnameList dim, bool unbiased, bool keepdim=false) {
    return at::_ops::var_mean_names_dim::call(self, dim, unbiased, keepdim);
}

// aten::var_mean.correction_names(Tensor self, Dimname[1] dim, *, Scalar? correction=None, bool keepdim=False) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> var_mean(const at::Tensor & self, at::DimnameList dim, const c10::optional<at::Scalar> & correction=c10::nullopt, bool keepdim=false) {
    return at::_ops::var_mean_correction_names::call(self, dim, correction, keepdim);
}

// aten::var_mean.correction_out(Tensor self, int[1]? dim=None, *, Scalar? correction=None, bool keepdim=False, Tensor(a!) out0, Tensor(b!) out1) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> var_mean_out(at::Tensor & out0, at::Tensor & out1, const at::Tensor & self, at::OptionalIntArrayRef dim=c10::nullopt, const c10::optional<at::Scalar> & correction=c10::nullopt, bool keepdim=false) {
    return at::_ops::var_mean_correction_out::call(self, dim, correction, keepdim, out0, out1);
}
// aten::var_mean.correction_out(Tensor self, int[1]? dim=None, *, Scalar? correction=None, bool keepdim=False, Tensor(a!) out0, Tensor(b!) out1) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> var_mean_outf(const at::Tensor & self, at::OptionalIntArrayRef dim, const c10::optional<at::Scalar> & correction, bool keepdim, at::Tensor & out0, at::Tensor & out1) {
    return at::_ops::var_mean_correction_out::call(self, dim, correction, keepdim, out0, out1);
}

}
