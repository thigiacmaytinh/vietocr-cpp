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


struct TORCH_API cauchy_ {
  using schema = at::Tensor & (at::Tensor &, double, double, c10::optional<at::Generator>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cauchy_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cauchy_(Tensor(a!) self, float median=0, float sigma=1, *, Generator? generator=None) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, double median, double sigma, c10::optional<at::Generator> generator);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, double median, double sigma, c10::optional<at::Generator> generator);
};

struct TORCH_API cauchy_out {
  using schema = at::Tensor & (const at::Tensor &, double, double, c10::optional<at::Generator>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cauchy")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cauchy.out(Tensor self, float median=0, float sigma=1, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, double median, double sigma, c10::optional<at::Generator> generator, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double median, double sigma, c10::optional<at::Generator> generator, at::Tensor & out);
};

struct TORCH_API cauchy {
  using schema = at::Tensor (const at::Tensor &, double, double, c10::optional<at::Generator>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::cauchy")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "cauchy(Tensor self, float median=0, float sigma=1, *, Generator? generator=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, double median, double sigma, c10::optional<at::Generator> generator);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, double median, double sigma, c10::optional<at::Generator> generator);
};

}} // namespace at::_ops
