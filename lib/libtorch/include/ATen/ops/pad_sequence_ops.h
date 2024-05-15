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


struct TORCH_API pad_sequence {
  using schema = at::Tensor (at::TensorList, bool, double);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::pad_sequence")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "pad_sequence(Tensor[] sequences, bool batch_first=False, float padding_value=0.0) -> Tensor")
  static at::Tensor call(at::TensorList sequences, bool batch_first, double padding_value);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList sequences, bool batch_first, double padding_value);
};

}} // namespace at::_ops
