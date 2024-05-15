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


struct TORCH_API trapz_x {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::trapz")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "x")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "trapz.x(Tensor y, Tensor x, *, int dim=-1) -> Tensor")
  static at::Tensor call(const at::Tensor & y, const at::Tensor & x, int64_t dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & y, const at::Tensor & x, int64_t dim);
};

struct TORCH_API trapz_dx {
  using schema = at::Tensor (const at::Tensor &, double, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::trapz")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dx")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "trapz.dx(Tensor y, *, float dx=1, int dim=-1) -> Tensor")
  static at::Tensor call(const at::Tensor & y, double dx, int64_t dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & y, double dx, int64_t dim);
};

}} // namespace at::_ops
