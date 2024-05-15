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


struct TORCH_API argsort {
  using schema = at::Tensor (const at::Tensor &, int64_t, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::argsort")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "argsort(Tensor self, int dim=-1, bool descending=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, int64_t dim, bool descending);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool descending);
};

struct TORCH_API argsort_stable {
  using schema = at::Tensor (const at::Tensor &, bool, int64_t, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::argsort")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "stable")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "argsort.stable(Tensor self, *, bool stable, int dim=-1, bool descending=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, bool stable, int64_t dim, bool descending);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool stable, int64_t dim, bool descending);
};

struct TORCH_API argsort_dimname {
  using schema = at::Tensor (const at::Tensor &, at::Dimname, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::argsort")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "argsort.dimname(Tensor self, Dimname dim, bool descending=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::Dimname dim, bool descending);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool descending);
};

struct TORCH_API argsort_stable_out {
  using schema = at::Tensor & (const at::Tensor &, bool, int64_t, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::argsort")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "stable_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "argsort.stable_out(Tensor self, *, bool stable, int dim=-1, bool descending=False, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, bool stable, int64_t dim, bool descending, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, bool stable, int64_t dim, bool descending, at::Tensor & out);
};

}} // namespace at::_ops
