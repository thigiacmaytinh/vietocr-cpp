#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API embedding_backward {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, c10::SymInt, c10::SymInt, bool, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::embedding_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "embedding_backward(Tensor grad, Tensor indices, SymInt num_weights, SymInt padding_idx, bool scale_grad_by_freq, bool sparse) -> Tensor")
  static at::Tensor call(const at::Tensor & grad, const at::Tensor & indices, c10::SymInt num_weights, c10::SymInt padding_idx, bool scale_grad_by_freq, bool sparse);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad, const at::Tensor & indices, c10::SymInt num_weights, c10::SymInt padding_idx, bool scale_grad_by_freq, bool sparse);
};

}} // namespace at::_ops
