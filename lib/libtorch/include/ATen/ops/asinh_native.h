#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>
#include <ATen/ops/asinh_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_asinh_out : public at::meta::structured_asinh {
void impl(const at::Tensor & self, const at::Tensor & out);
};
TORCH_API at::Tensor asinh_sparse(const at::Tensor & self);
TORCH_API at::Tensor & asinh_sparse_out(const at::Tensor & self, at::Tensor & out);
TORCH_API at::Tensor & asinh_sparse_(at::Tensor & self);
TORCH_API at::Tensor asinh_sparse_csr(const at::Tensor & self);
TORCH_API at::Tensor & asinh_sparse_csr_out(const at::Tensor & self, at::Tensor & out);
TORCH_API at::Tensor & asinh_sparse_csr_(at::Tensor & self);
} // namespace native
} // namespace at
