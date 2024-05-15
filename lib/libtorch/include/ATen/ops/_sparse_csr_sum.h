#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/_sparse_csr_sum_ops.h>

namespace at {


// aten::_sparse_csr_sum.dim_dtype(Tensor self, int[1] dim, bool keepdim=False, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor _sparse_csr_sum(const at::Tensor & self, at::IntArrayRef dim, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::_sparse_csr_sum_dim_dtype::call(self, dim, keepdim, dtype);
}

// aten::_sparse_csr_sum.dim_dtype_out(Tensor self, int[1] dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_csr_sum_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef dim, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt) {
    return at::_ops::_sparse_csr_sum_dim_dtype_out::call(self, dim, keepdim, dtype, out);
}
// aten::_sparse_csr_sum.dim_dtype_out(Tensor self, int[1] dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _sparse_csr_sum_outf(const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out) {
    return at::_ops::_sparse_csr_sum_dim_dtype_out::call(self, dim, keepdim, dtype, out);
}

}
