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


struct TORCH_API hsplit_int {
  using schema = ::std::vector<at::Tensor> (const at::Tensor &, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::hsplit")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "int")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "hsplit.int(Tensor(a -> *) self, int sections) -> Tensor(a)[]")
  static ::std::vector<at::Tensor> call(const at::Tensor & self, int64_t sections);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t sections);
};

struct TORCH_API hsplit_array {
  using schema = ::std::vector<at::Tensor> (const at::Tensor &, at::IntArrayRef);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::hsplit")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "array")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "hsplit.array(Tensor(a -> *) self, int[] indices) -> Tensor(a)[]")
  static ::std::vector<at::Tensor> call(const at::Tensor & self, at::IntArrayRef indices);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef indices);
};

}} // namespace at::_ops
