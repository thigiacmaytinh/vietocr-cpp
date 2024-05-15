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



#include <ATen/ops/mean_ops.h>

namespace at {


// aten::mean(Tensor self, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor mean(const at::Tensor & self, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::mean::call(self, dtype);
}

// aten::mean.dim(Tensor self, int[1]? dim, bool keepdim=False, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor mean(const at::Tensor & self, at::OptionalIntArrayRef dim, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::mean_dim::call(self, dim, keepdim, dtype);
}

// aten::mean.out(Tensor self, int[1]? dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & mean_out(at::Tensor & out, const at::Tensor & self, at::OptionalIntArrayRef dim, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::mean_out::call(self, dim, keepdim, dtype, out);
}
// aten::mean.out(Tensor self, int[1]? dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & mean_outf(const at::Tensor & self, at::OptionalIntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
    return at::_ops::mean_out::call(self, dim, keepdim, dtype, out);
}

// aten::mean.names_dim(Tensor self, Dimname[1] dim, bool keepdim=False, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor mean(const at::Tensor & self, at::DimnameList dim, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::mean_names_dim::call(self, dim, keepdim, dtype);
}

// aten::mean.names_out(Tensor self, Dimname[1] dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & mean_out(at::Tensor & out, const at::Tensor & self, at::DimnameList dim, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::mean_names_out::call(self, dim, keepdim, dtype, out);
}
// aten::mean.names_out(Tensor self, Dimname[1] dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & mean_outf(const at::Tensor & self, at::DimnameList dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
    return at::_ops::mean_names_out::call(self, dim, keepdim, dtype, out);
}

}
