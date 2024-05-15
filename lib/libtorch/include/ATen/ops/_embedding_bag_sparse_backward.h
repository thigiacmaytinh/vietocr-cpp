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



#include <ATen/ops/_embedding_bag_sparse_backward_ops.h>

namespace at {


// aten::_embedding_bag_sparse_backward(Tensor grad, Tensor indices, Tensor offsets, Tensor offset2bag, Tensor bag_size, SymInt num_weights, bool scale_grad_by_freq, int mode, Tensor? per_sample_weights, int padding_idx=-1) -> Tensor
inline at::Tensor _embedding_bag_sparse_backward(const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offsets, const at::Tensor & offset2bag, const at::Tensor & bag_size, int64_t num_weights, bool scale_grad_by_freq, int64_t mode, const c10::optional<at::Tensor> & per_sample_weights, int64_t padding_idx=-1) {
    return at::_ops::_embedding_bag_sparse_backward::call(grad, indices, offsets, offset2bag, bag_size, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _embedding_bag_sparse_backward(const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offsets, const at::Tensor & offset2bag, const at::Tensor & bag_size, int64_t num_weights, bool scale_grad_by_freq, int64_t mode, const c10::optional<at::Tensor> & per_sample_weights, int64_t padding_idx=-1) {
    return at::_ops::_embedding_bag_sparse_backward::call(grad, indices, offsets, offset2bag, bag_size, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
  }
}

// aten::_embedding_bag_sparse_backward(Tensor grad, Tensor indices, Tensor offsets, Tensor offset2bag, Tensor bag_size, SymInt num_weights, bool scale_grad_by_freq, int mode, Tensor? per_sample_weights, int padding_idx=-1) -> Tensor
inline at::Tensor _embedding_bag_sparse_backward_symint(const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offsets, const at::Tensor & offset2bag, const at::Tensor & bag_size, c10::SymInt num_weights, bool scale_grad_by_freq, int64_t mode, const c10::optional<at::Tensor> & per_sample_weights, int64_t padding_idx=-1) {
    return at::_ops::_embedding_bag_sparse_backward::call(grad, indices, offsets, offset2bag, bag_size, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _embedding_bag_sparse_backward(const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offsets, const at::Tensor & offset2bag, const at::Tensor & bag_size, c10::SymInt num_weights, bool scale_grad_by_freq, int64_t mode, const c10::optional<at::Tensor> & per_sample_weights, int64_t padding_idx=-1) {
    return at::_ops::_embedding_bag_sparse_backward::call(grad, indices, offsets, offset2bag, bag_size, num_weights, scale_grad_by_freq, mode, per_sample_weights, padding_idx);
  }
}

}
