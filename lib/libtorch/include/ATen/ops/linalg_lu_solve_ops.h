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


struct TORCH_API linalg_lu_solve {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, const at::Tensor &, bool, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_lu_solve")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_lu_solve(Tensor LU, Tensor pivots, Tensor B, *, bool left=True, bool adjoint=False) -> Tensor")
  static at::Tensor call(const at::Tensor & LU, const at::Tensor & pivots, const at::Tensor & B, bool left, bool adjoint);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & LU, const at::Tensor & pivots, const at::Tensor & B, bool left, bool adjoint);
};

struct TORCH_API linalg_lu_solve_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Tensor &, const at::Tensor &, bool, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_lu_solve")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_lu_solve.out(Tensor LU, Tensor pivots, Tensor B, *, bool left=True, bool adjoint=False, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & LU, const at::Tensor & pivots, const at::Tensor & B, bool left, bool adjoint, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & LU, const at::Tensor & pivots, const at::Tensor & B, bool left, bool adjoint, at::Tensor & out);
};

}} // namespace at::_ops
