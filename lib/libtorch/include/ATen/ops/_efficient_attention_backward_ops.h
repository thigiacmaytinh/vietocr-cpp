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


struct TORCH_API _efficient_attention_backward {
  using schema = ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> (const at::Tensor &, const at::Tensor &, const at::Tensor &, const at::Tensor &, const c10::optional<at::Tensor> &, const at::Tensor &, const c10::optional<at::Tensor> &, const c10::optional<at::Tensor> &, c10::SymInt, c10::SymInt, const at::Tensor &, double, const at::Tensor &, const at::Tensor &, int64_t, bool, c10::optional<double>, c10::optional<int64_t>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_efficient_attention_backward")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_efficient_attention_backward(Tensor grad_out_, Tensor query, Tensor key, Tensor value, Tensor? bias, Tensor out, Tensor? cu_seqlens_q, Tensor? cu_seqlens_k, SymInt max_seqlen_q, SymInt max_seqlen_k, Tensor logsumexp, float dropout_p, Tensor philox_seed, Tensor philox_offset, int custom_mask_type, bool bias_requires_grad, *, float? scale=None, int? num_splits_key=None) -> (Tensor, Tensor, Tensor, Tensor)")
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> call(const at::Tensor & grad_out_, const at::Tensor & query, const at::Tensor & key, const at::Tensor & value, const c10::optional<at::Tensor> & bias, const at::Tensor & out, const c10::optional<at::Tensor> & cu_seqlens_q, const c10::optional<at::Tensor> & cu_seqlens_k, c10::SymInt max_seqlen_q, c10::SymInt max_seqlen_k, const at::Tensor & logsumexp, double dropout_p, const at::Tensor & philox_seed, const at::Tensor & philox_offset, int64_t custom_mask_type, bool bias_requires_grad, c10::optional<double> scale, c10::optional<int64_t> num_splits_key);
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & grad_out_, const at::Tensor & query, const at::Tensor & key, const at::Tensor & value, const c10::optional<at::Tensor> & bias, const at::Tensor & out, const c10::optional<at::Tensor> & cu_seqlens_q, const c10::optional<at::Tensor> & cu_seqlens_k, c10::SymInt max_seqlen_q, c10::SymInt max_seqlen_k, const at::Tensor & logsumexp, double dropout_p, const at::Tensor & philox_seed, const at::Tensor & philox_offset, int64_t custom_mask_type, bool bias_requires_grad, c10::optional<double> scale, c10::optional<int64_t> num_splits_key);
};

}} // namespace at::_ops
