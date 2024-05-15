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


struct TORCH_API float_power_Tensor_Tensor_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Tensor_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power.Tensor_Tensor_out(Tensor self, Tensor exponent, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, const at::Tensor & exponent, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & exponent, at::Tensor & out);
};

struct TORCH_API float_power_Tensor_Tensor {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Tensor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power.Tensor_Tensor(Tensor self, Tensor exponent) -> Tensor")
  static at::Tensor call(const at::Tensor & self, const at::Tensor & exponent);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & exponent);
};

struct TORCH_API float_power_Scalar_out {
  using schema = at::Tensor & (const at::Scalar &, const at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power.Scalar_out(Scalar self, Tensor exponent, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Scalar & self, const at::Tensor & exponent, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & exponent, at::Tensor & out);
};

struct TORCH_API float_power_Scalar {
  using schema = at::Tensor (const at::Scalar &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power.Scalar(Scalar self, Tensor exponent) -> Tensor")
  static at::Tensor call(const at::Scalar & self, const at::Tensor & exponent);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & self, const at::Tensor & exponent);
};

struct TORCH_API float_power_Tensor_Scalar_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Scalar &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Scalar_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power.Tensor_Scalar_out(Tensor self, Scalar exponent, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, const at::Scalar & exponent, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & exponent, at::Tensor & out);
};

struct TORCH_API float_power_Tensor_Scalar {
  using schema = at::Tensor (const at::Tensor &, const at::Scalar &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power.Tensor_Scalar(Tensor self, Scalar exponent) -> Tensor")
  static at::Tensor call(const at::Tensor & self, const at::Scalar & exponent);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Scalar & exponent);
};

struct TORCH_API float_power__Scalar {
  using schema = at::Tensor & (at::Tensor &, const at::Scalar &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power_.Scalar(Tensor(a!) self, Scalar exponent) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, const at::Scalar & exponent);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Scalar & exponent);
};

struct TORCH_API float_power__Tensor {
  using schema = at::Tensor & (at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::float_power_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "float_power_.Tensor(Tensor(a!) self, Tensor exponent) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, const at::Tensor & exponent);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, const at::Tensor & exponent);
};

}} // namespace at::_ops
