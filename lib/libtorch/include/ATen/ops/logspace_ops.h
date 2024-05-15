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


struct TORCH_API logspace {
  using schema = at::Tensor (const at::Scalar &, const at::Scalar &, int64_t, double, c10::optional<at::ScalarType>, c10::optional<at::Layout>, c10::optional<at::Device>, c10::optional<bool>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace(Scalar start, Scalar end, int steps, float base=10.0, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor")
  static at::Tensor call(const at::Scalar & start, const at::Scalar & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
};

struct TORCH_API logspace_Tensor_Tensor {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, int64_t, double, c10::optional<at::ScalarType>, c10::optional<at::Layout>, c10::optional<at::Device>, c10::optional<bool>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Tensor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace.Tensor_Tensor(Tensor start, Tensor end, int steps, float base=10.0, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor")
  static at::Tensor call(const at::Tensor & start, const at::Tensor & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & start, const at::Tensor & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
};

struct TORCH_API logspace_Tensor_Scalar {
  using schema = at::Tensor (const at::Tensor &, const at::Scalar &, int64_t, double, c10::optional<at::ScalarType>, c10::optional<at::Layout>, c10::optional<at::Device>, c10::optional<bool>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace.Tensor_Scalar(Tensor start, Scalar end, int steps, float base=10.0, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor")
  static at::Tensor call(const at::Tensor & start, const at::Scalar & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & start, const at::Scalar & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
};

struct TORCH_API logspace_Scalar_Tensor {
  using schema = at::Tensor (const at::Scalar &, const at::Tensor &, int64_t, double, c10::optional<at::ScalarType>, c10::optional<at::Layout>, c10::optional<at::Device>, c10::optional<bool>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar_Tensor")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace.Scalar_Tensor(Scalar start, Tensor end, int steps, float base=10.0, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor")
  static at::Tensor call(const at::Scalar & start, const at::Tensor & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Tensor & end, int64_t steps, double base, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory);
};

struct TORCH_API logspace_out {
  using schema = at::Tensor & (const at::Scalar &, const at::Scalar &, int64_t, double, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace.out(Scalar start, Scalar end, int steps, float base=10.0, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Scalar & start, const at::Scalar & end, int64_t steps, double base, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Scalar & end, int64_t steps, double base, at::Tensor & out);
};

struct TORCH_API logspace_Tensor_Tensor_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Tensor &, int64_t, double, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Tensor_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace.Tensor_Tensor_out(Tensor start, Tensor end, int steps, float base=10.0, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & start, const at::Tensor & end, int64_t steps, double base, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & start, const at::Tensor & end, int64_t steps, double base, at::Tensor & out);
};

struct TORCH_API logspace_Tensor_Scalar_out {
  using schema = at::Tensor & (const at::Tensor &, const at::Scalar &, int64_t, double, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Tensor_Scalar_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace.Tensor_Scalar_out(Tensor start, Scalar end, int steps, float base=10.0, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & start, const at::Scalar & end, int64_t steps, double base, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & start, const at::Scalar & end, int64_t steps, double base, at::Tensor & out);
};

struct TORCH_API logspace_Scalar_Tensor_out {
  using schema = at::Tensor & (const at::Scalar &, const at::Tensor &, int64_t, double, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logspace")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar_Tensor_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logspace.Scalar_Tensor_out(Scalar start, Tensor end, int steps, float base=10.0, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Scalar & start, const at::Tensor & end, int64_t steps, double base, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Scalar & start, const at::Tensor & end, int64_t steps, double base, at::Tensor & out);
};

}} // namespace at::_ops
