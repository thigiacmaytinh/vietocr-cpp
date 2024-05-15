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


struct TORCH_API _foreach_maximum_Scalar {
  using schema = ::std::vector<at::Tensor> (at::TensorList, const at::Scalar &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.Scalar(Tensor[] self, Scalar scalar) -> Tensor[]")
  static ::std::vector<at::Tensor> call(at::TensorList self, const at::Scalar & scalar);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, const at::Scalar & scalar);
};

struct TORCH_API _foreach_maximum__Scalar {
  using schema = void (at::TensorList, const at::Scalar &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum_.Scalar(Tensor(a!)[] self, Scalar scalar) -> ()")
  static void call(at::TensorList self, const at::Scalar & scalar);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, const at::Scalar & scalar);
};

struct TORCH_API _foreach_maximum_List {
  using schema = ::std::vector<at::Tensor> (at::TensorList, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "List")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.List(Tensor[] self, Tensor[] other) -> Tensor[]")
  static ::std::vector<at::Tensor> call(at::TensorList self, at::TensorList other);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other);
};

struct TORCH_API _foreach_maximum__List {
  using schema = void (at::TensorList, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "List")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum_.List(Tensor(a!)[] self, Tensor[] other) -> ()")
  static void call(at::TensorList self, at::TensorList other);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other);
};

struct TORCH_API _foreach_maximum_ScalarList {
  using schema = ::std::vector<at::Tensor> (at::TensorList, at::ArrayRef<at::Scalar>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "ScalarList")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.ScalarList(Tensor[] self, Scalar[] scalars) -> Tensor[]")
  static ::std::vector<at::Tensor> call(at::TensorList self, at::ArrayRef<at::Scalar> scalars);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::ArrayRef<at::Scalar> scalars);
};

struct TORCH_API _foreach_maximum__ScalarList {
  using schema = void (at::TensorList, at::ArrayRef<at::Scalar>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "ScalarList")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum_.ScalarList(Tensor(a!)[] self, Scalar[] scalars) -> ()")
  static void call(at::TensorList self, at::ArrayRef<at::Scalar> scalars);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::ArrayRef<at::Scalar> scalars);
};

struct TORCH_API _foreach_maximum_Scalar_out {
  using schema = void (at::TensorList, const at::Scalar &, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "Scalar_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.Scalar_out(Tensor[] self, Scalar scalar, *, Tensor(a!)[] out) -> ()")
  static void call(at::TensorList self, const at::Scalar & scalar, at::TensorList out);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, const at::Scalar & scalar, at::TensorList out);
};

struct TORCH_API _foreach_maximum_List_out {
  using schema = void (at::TensorList, at::TensorList, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "List_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.List_out(Tensor[] self, Tensor[] other, *, Tensor(a!)[] out) -> ()")
  static void call(at::TensorList self, at::TensorList other, at::TensorList out);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other, at::TensorList out);
};

struct TORCH_API _foreach_maximum_ScalarList_out {
  using schema = void (at::TensorList, at::ArrayRef<at::Scalar>, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "ScalarList_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.ScalarList_out(Tensor[] self, Scalar[] scalars, *, Tensor(a!)[] out) -> ()")
  static void call(at::TensorList self, at::ArrayRef<at::Scalar> scalars, at::TensorList out);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::ArrayRef<at::Scalar> scalars, at::TensorList out);
};

}} // namespace at::_ops
