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


struct TORCH_API _scaled_mm {
  using schema = ::std::tuple<at::Tensor,at::Tensor> (const at::Tensor &, const at::Tensor &, const c10::optional<at::Tensor> &, c10::optional<at::ScalarType>, const c10::optional<at::Tensor> &, const c10::optional<at::Tensor> &, const c10::optional<at::Tensor> &, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_scaled_mm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_scaled_mm(Tensor self, Tensor mat2, *, Tensor? bias=None, ScalarType? out_dtype=None, Tensor? scale_a=None, Tensor? scale_b=None, Tensor? scale_result=None, bool use_fast_accum=False) -> (Tensor, Tensor)")
  static ::std::tuple<at::Tensor,at::Tensor> call(const at::Tensor & self, const at::Tensor & mat2, const c10::optional<at::Tensor> & bias, c10::optional<at::ScalarType> out_dtype, const c10::optional<at::Tensor> & scale_a, const c10::optional<at::Tensor> & scale_b, const c10::optional<at::Tensor> & scale_result, bool use_fast_accum);
  static ::std::tuple<at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2, const c10::optional<at::Tensor> & bias, c10::optional<at::ScalarType> out_dtype, const c10::optional<at::Tensor> & scale_a, const c10::optional<at::Tensor> & scale_b, const c10::optional<at::Tensor> & scale_result, bool use_fast_accum);
};

struct TORCH_API _scaled_mm_out {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &> (const at::Tensor &, const at::Tensor &, const c10::optional<at::Tensor> &, c10::optional<at::ScalarType>, const c10::optional<at::Tensor> &, const c10::optional<at::Tensor> &, const c10::optional<at::Tensor> &, bool, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_scaled_mm")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_scaled_mm.out(Tensor self, Tensor mat2, *, Tensor? bias=None, ScalarType? out_dtype=None, Tensor? scale_a=None, Tensor? scale_b=None, Tensor? scale_result=None, bool use_fast_accum=False, Tensor(a!) out, Tensor(b!) out_amax) -> (Tensor(a!), Tensor(b!))")
  static ::std::tuple<at::Tensor &,at::Tensor &> call(const at::Tensor & self, const at::Tensor & mat2, const c10::optional<at::Tensor> & bias, c10::optional<at::ScalarType> out_dtype, const c10::optional<at::Tensor> & scale_a, const c10::optional<at::Tensor> & scale_b, const c10::optional<at::Tensor> & scale_result, bool use_fast_accum, at::Tensor & out, at::Tensor & out_amax);
  static ::std::tuple<at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, const at::Tensor & mat2, const c10::optional<at::Tensor> & bias, c10::optional<at::ScalarType> out_dtype, const c10::optional<at::Tensor> & scale_a, const c10::optional<at::Tensor> & scale_b, const c10::optional<at::Tensor> & scale_result, bool use_fast_accum, at::Tensor & out, at::Tensor & out_amax);
};

}} // namespace at::_ops
