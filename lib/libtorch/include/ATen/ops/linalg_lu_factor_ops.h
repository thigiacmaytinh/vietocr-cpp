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


struct TORCH_API linalg_lu_factor {
  using schema = ::std::tuple<at::Tensor,at::Tensor> (const at::Tensor &, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_lu_factor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_lu_factor(Tensor A, *, bool pivot=True) -> (Tensor LU, Tensor pivots)")
  static ::std::tuple<at::Tensor,at::Tensor> call(const at::Tensor & A, bool pivot);
  static ::std::tuple<at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & A, bool pivot);
};

struct TORCH_API linalg_lu_factor_out {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &> (const at::Tensor &, bool, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_lu_factor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_lu_factor.out(Tensor A, *, bool pivot=True, Tensor(a!) LU, Tensor(b!) pivots) -> (Tensor(a!) LU, Tensor(b!) pivots)")
  static ::std::tuple<at::Tensor &,at::Tensor &> call(const at::Tensor & A, bool pivot, at::Tensor & LU, at::Tensor & pivots);
  static ::std::tuple<at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & A, bool pivot, at::Tensor & LU, at::Tensor & pivots);
};

}} // namespace at::_ops
