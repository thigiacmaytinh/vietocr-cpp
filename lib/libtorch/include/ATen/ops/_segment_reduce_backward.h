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



#include <ATen/ops/_segment_reduce_backward_ops.h>

namespace at {


// aten::_segment_reduce_backward(Tensor grad, Tensor output, Tensor data, str reduce, *, Tensor? lengths=None, Tensor? offsets=None, int axis=0, Scalar? initial=None) -> Tensor
inline at::Tensor _segment_reduce_backward(const at::Tensor & grad, const at::Tensor & output, const at::Tensor & data, c10::string_view reduce, const c10::optional<at::Tensor> & lengths={}, const c10::optional<at::Tensor> & offsets={}, int64_t axis=0, const c10::optional<at::Scalar> & initial=c10::nullopt) {
    return at::_ops::_segment_reduce_backward::call(grad, output, data, reduce, lengths, offsets, axis, initial);
}

// aten::_segment_reduce_backward.out(Tensor grad, Tensor output, Tensor data, str reduce, *, Tensor? lengths=None, Tensor? offsets=None, int axis=0, Scalar? initial=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _segment_reduce_backward_out(at::Tensor & out, const at::Tensor & grad, const at::Tensor & output, const at::Tensor & data, c10::string_view reduce, const c10::optional<at::Tensor> & lengths={}, const c10::optional<at::Tensor> & offsets={}, int64_t axis=0, const c10::optional<at::Scalar> & initial=c10::nullopt) {
    return at::_ops::_segment_reduce_backward_out::call(grad, output, data, reduce, lengths, offsets, axis, initial, out);
}
// aten::_segment_reduce_backward.out(Tensor grad, Tensor output, Tensor data, str reduce, *, Tensor? lengths=None, Tensor? offsets=None, int axis=0, Scalar? initial=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _segment_reduce_backward_outf(const at::Tensor & grad, const at::Tensor & output, const at::Tensor & data, c10::string_view reduce, const c10::optional<at::Tensor> & lengths, const c10::optional<at::Tensor> & offsets, int64_t axis, const c10::optional<at::Scalar> & initial, at::Tensor & out) {
    return at::_ops::_segment_reduce_backward_out::call(grad, output, data, reduce, lengths, offsets, axis, initial, out);
}

}
