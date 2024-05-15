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


struct TORCH_API split_with_sizes {
  using schema = ::std::vector<at::Tensor> (const at::Tensor &, c10::SymIntArrayRef, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::split_with_sizes")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "split_with_sizes(Tensor(a -> *) self, SymInt[] split_sizes, int dim=0) -> Tensor(a)[]")
  static ::std::vector<at::Tensor> call(const at::Tensor & self, c10::SymIntArrayRef split_sizes, int64_t dim);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymIntArrayRef split_sizes, int64_t dim);
};

}} // namespace at::_ops
