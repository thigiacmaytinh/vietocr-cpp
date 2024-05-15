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


struct TORCH_API linalg_eigh {
  using schema = ::std::tuple<at::Tensor,at::Tensor> (const at::Tensor &, c10::string_view);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_eigh")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_eigh(Tensor self, str UPLO=\"L\") -> (Tensor eigenvalues, Tensor eigenvectors)")
  static ::std::tuple<at::Tensor,at::Tensor> call(const at::Tensor & self, c10::string_view UPLO);
  static ::std::tuple<at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::string_view UPLO);
};

struct TORCH_API linalg_eigh_eigvals {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &> (const at::Tensor &, c10::string_view, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::linalg_eigh")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "eigvals")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "linalg_eigh.eigvals(Tensor self, str UPLO=\"L\", *, Tensor(a!) eigvals, Tensor(b!) eigvecs) -> (Tensor(a!) eigenvalues, Tensor(b!) eigenvectors)")
  static ::std::tuple<at::Tensor &,at::Tensor &> call(const at::Tensor & self, c10::string_view UPLO, at::Tensor & eigvals, at::Tensor & eigvecs);
  static ::std::tuple<at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::string_view UPLO, at::Tensor & eigvals, at::Tensor & eigvecs);
};

}} // namespace at::_ops
