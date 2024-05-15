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


struct TORCH_API native_norm {
  using schema = at::Tensor (const at::Tensor &, const at::Scalar &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::native_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "native_norm(Tensor self, Scalar p=2) -> Tensor")
  static at::Tensor call(const at::Tensor & self, const at::Scalar & p);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & p);
};

struct TORCH_API native_norm_ScalarOpt_dim_dtype {
  using schema = at::Tensor (const at::Tensor &, const c10::optional<at::Scalar> &, at::IntArrayRef, bool, c10::optional<at::ScalarType>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::native_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "ScalarOpt_dim_dtype")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "native_norm.ScalarOpt_dim_dtype(Tensor self, Scalar? p, int[1] dim, bool keepdim, ScalarType? dtype) -> Tensor")
  static at::Tensor call(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype);
};

struct TORCH_API native_norm_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Scalar &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::native_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "native_norm.out(Tensor self, Scalar p=2, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, const at::Scalar & p, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & p, at::Tensor & out);
};

struct TORCH_API native_norm_ScalarOpt_dim_dtype_out {
  using schema = at::Tensor & (const at::Tensor &, const c10::optional<at::Scalar> &, at::IntArrayRef, bool, c10::optional<at::ScalarType>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::native_norm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "ScalarOpt_dim_dtype_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "native_norm.ScalarOpt_dim_dtype_out(Tensor self, Scalar? p, int[1] dim, bool keepdim, ScalarType? dtype, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const c10::optional<at::Scalar> & p, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out);
};

}} // namespace at::_ops
