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



#include <ATen/ops/_sparse_log_softmax_backward_data_ops.h>

namespace at {


// aten::_sparse_log_softmax_backward_data(Tensor grad_output, Tensor output, int dim, Tensor self) -> Tensor
inline at::Tensor _sparse_log_softmax_backward_data(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self) {
    return at::_ops::_sparse_log_softmax_backward_data::call(grad_output, output, dim, self);
}

// aten::_sparse_log_softmax_backward_data.out(Tensor grad_output, Tensor output, int dim, Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_log_softmax_backward_data_out(at::Tensor & out, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self) {
    return at::_ops::_sparse_log_softmax_backward_data_out::call(grad_output, output, dim, self, out);
}
// aten::_sparse_log_softmax_backward_data.out(Tensor grad_output, Tensor output, int dim, Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_log_softmax_backward_data_outf(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, const at::Tensor & self, at::Tensor & out) {
    return at::_ops::_sparse_log_softmax_backward_data_out::call(grad_output, output, dim, self, out);
}

}
