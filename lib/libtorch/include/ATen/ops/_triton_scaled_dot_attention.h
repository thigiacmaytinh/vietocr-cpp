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



#include <ATen/ops/_triton_scaled_dot_attention_ops.h>

namespace at {


// aten::_triton_scaled_dot_attention(Tensor q, Tensor k, Tensor v, float dropout_p=0.0) -> Tensor
inline at::Tensor _triton_scaled_dot_attention(const at::Tensor & q, const at::Tensor & k, const at::Tensor & v, double dropout_p=0.0) {
    return at::_ops::_triton_scaled_dot_attention::call(q, k, v, dropout_p);
}

// aten::_triton_scaled_dot_attention.out(Tensor q, Tensor k, Tensor v, float dropout_p=0.0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _triton_scaled_dot_attention_out(at::Tensor & out, const at::Tensor & q, const at::Tensor & k, const at::Tensor & v, double dropout_p=0.0) {
    return at::_ops::_triton_scaled_dot_attention_out::call(q, k, v, dropout_p, out);
}
// aten::_triton_scaled_dot_attention.out(Tensor q, Tensor k, Tensor v, float dropout_p=0.0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _triton_scaled_dot_attention_outf(const at::Tensor & q, const at::Tensor & k, const at::Tensor & v, double dropout_p, at::Tensor & out) {
    return at::_ops::_triton_scaled_dot_attention_out::call(q, k, v, dropout_p, out);
}

}
