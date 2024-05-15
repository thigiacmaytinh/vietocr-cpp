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


struct TORCH_API special_shifted_chebyshev_polynomial_v {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::special_shifted_chebyshev_polynomial_v")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "special_shifted_chebyshev_polynomial_v(Tensor x, Tensor n) -> Tensor")
  static at::Tensor call(const at::Tensor & x, const at::Tensor & n);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x, const at::Tensor & n);
};

struct TORCH_API special_shifted_chebyshev_polynomial_v_x_scalar {
  using schema = at::Tensor (const at::Scalar &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::special_shifted_chebyshev_polynomial_v")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "x_scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "special_shifted_chebyshev_polynomial_v.x_scalar(Scalar x, Tensor n) -> Tensor")
  static at::Tensor call(const at::Scalar & x, const at::Tensor & n);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & x, const at::Tensor & n);
};

struct TORCH_API special_shifted_chebyshev_polynomial_v_n_scalar {
  using schema = at::Tensor (const at::Tensor &, const at::Scalar &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::special_shifted_chebyshev_polynomial_v")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "n_scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "special_shifted_chebyshev_polynomial_v.n_scalar(Tensor x, Scalar n) -> Tensor")
  static at::Tensor call(const at::Tensor & x, const at::Scalar & n);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x, const at::Scalar & n);
};

struct TORCH_API special_shifted_chebyshev_polynomial_v_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::special_shifted_chebyshev_polynomial_v")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "special_shifted_chebyshev_polynomial_v.out(Tensor x, Tensor n, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & x, const at::Tensor & n, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x, const at::Tensor & n, at::Tensor & out);
};

struct TORCH_API special_shifted_chebyshev_polynomial_v_x_scalar_out {
  using schema = at::Tensor & (const at::Scalar &, const at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::special_shifted_chebyshev_polynomial_v")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "x_scalar_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "special_shifted_chebyshev_polynomial_v.x_scalar_out(Scalar x, Tensor n, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Scalar & x, const at::Tensor & n, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & x, const at::Tensor & n, at::Tensor & out);
};

struct TORCH_API special_shifted_chebyshev_polynomial_v_n_scalar_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Scalar &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::special_shifted_chebyshev_polynomial_v")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "n_scalar_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "special_shifted_chebyshev_polynomial_v.n_scalar_out(Tensor x, Scalar n, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & x, const at::Scalar & n, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & x, const at::Scalar & n, at::Tensor & out);
};

}} // namespace at::_ops
