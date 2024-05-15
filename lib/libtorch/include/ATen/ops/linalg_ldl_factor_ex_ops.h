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


struct TORCH_API linalg_ldl_factor_ex {
  using schema = ::std::tuple<at::Tensor,at::Tensor,at::Tensor> (const at::Tensor &, bool, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_ldl_factor_ex")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_ldl_factor_ex(Tensor self, *, bool hermitian=False, bool check_errors=False) -> (Tensor LD, Tensor pivots, Tensor info)")
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor> call(const at::Tensor & self, bool hermitian, bool check_errors);
  static ::std::tuple<at::Tensor,at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool hermitian, bool check_errors);
};

struct TORCH_API linalg_ldl_factor_ex_out {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> (const at::Tensor &, bool, bool, at::Tensor &, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_ldl_factor_ex")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_ldl_factor_ex.out(Tensor self, *, bool hermitian=False, bool check_errors=False, Tensor(a!) LD, Tensor(b!) pivots, Tensor(c!) info) -> (Tensor(a!) LD, Tensor(b!) pivots, Tensor(c!) info)")
  static ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> call(const at::Tensor & self, bool hermitian, bool check_errors, at::Tensor & LD, at::Tensor & pivots, at::Tensor & info);
  static ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool hermitian, bool check_errors, at::Tensor & LD, at::Tensor & pivots, at::Tensor & info);
};

}} // namespace at::_ops
