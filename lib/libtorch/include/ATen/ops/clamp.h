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



#include <ATen/ops/clamp_ops.h>

namespace at {


// aten::clamp(Tensor self, Scalar? min=None, Scalar? max=None) -> Tensor
inline at::Tensor clamp(const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max=c10::nullopt) {
    return at::_ops::clamp::call(self, min, max);
}

// aten::clamp.Tensor(Tensor self, Tensor? min=None, Tensor? max=None) -> Tensor
inline at::Tensor clamp(const at::Tensor & self, const c10::optional<at::Tensor> & min={}, const c10::optional<at::Tensor> & max={}) {
    return at::_ops::clamp_Tensor::call(self, min, max);
}

// aten::clamp_(Tensor(a!) self, Scalar? min=None, Scalar? max=None) -> Tensor(a!)
inline at::Tensor & clamp_(at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max=c10::nullopt) {
    return at::_ops::clamp_::call(self, min, max);
}

// aten::clamp_.Tensor(Tensor(a!) self, Tensor? min=None, Tensor? max=None) -> Tensor(a!)
inline at::Tensor & clamp_(at::Tensor & self, const c10::optional<at::Tensor> & min={}, const c10::optional<at::Tensor> & max={}) {
    return at::_ops::clamp__Tensor::call(self, min, max);
}

// aten::clamp.out(Tensor self, Scalar? min=None, Scalar? max=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & clamp_out(at::Tensor & out, const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max=c10::nullopt) {
    return at::_ops::clamp_out::call(self, min, max, out);
}
// aten::clamp.out(Tensor self, Scalar? min=None, Scalar? max=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & clamp_outf(const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max, at::Tensor & out) {
    return at::_ops::clamp_out::call(self, min, max, out);
}

// aten::clamp.Tensor_out(Tensor self, Tensor? min=None, Tensor? max=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & clamp_out(at::Tensor & out, const at::Tensor & self, const c10::optional<at::Tensor> & min={}, const c10::optional<at::Tensor> & max={}) {
    return at::_ops::clamp_Tensor_out::call(self, min, max, out);
}
// aten::clamp.Tensor_out(Tensor self, Tensor? min=None, Tensor? max=None, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & clamp_outf(const at::Tensor & self, const c10::optional<at::Tensor> & min, const c10::optional<at::Tensor> & max, at::Tensor & out) {
    return at::_ops::clamp_Tensor_out::call(self, min, max, out);
}

}
