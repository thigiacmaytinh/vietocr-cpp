#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace cpu {

TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _scaled_dot_product_flash_attention_backward(const at::Tensor & grad_out, const at::Tensor & query, const at::Tensor & key, const at::Tensor & value, const at::Tensor & out, const at::Tensor & logsumexp, const at::Tensor & cum_seq_q, const at::Tensor & cum_seq_k, int64_t max_q, int64_t max_k, double dropout_p, bool is_causal, const at::Tensor & philox_seed, const at::Tensor & philox_offset, c10::optional<double> scale=c10::nullopt);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _scaled_dot_product_flash_attention_backward_symint(const at::Tensor & grad_out, const at::Tensor & query, const at::Tensor & key, const at::Tensor & value, const at::Tensor & out, const at::Tensor & logsumexp, const at::Tensor & cum_seq_q, const at::Tensor & cum_seq_k, c10::SymInt max_q, c10::SymInt max_k, double dropout_p, bool is_causal, const at::Tensor & philox_seed, const at::Tensor & philox_offset, c10::optional<double> scale=c10::nullopt);

} // namespace cpu
} // namespace at
