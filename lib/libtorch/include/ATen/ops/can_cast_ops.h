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


struct TORCH_API can_cast {
  using schema = bool (at::ScalarType, at::ScalarType);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::can_cast")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "can_cast(ScalarType from, ScalarType to) -> bool")
  static bool call(at::ScalarType from, at::ScalarType to);
  static bool redispatch(c10::DispatchKeySet dispatchKeySet, at::ScalarType from, at::ScalarType to);
};

}} // namespace at::_ops
