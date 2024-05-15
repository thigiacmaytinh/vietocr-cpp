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


namespace at {
namespace native {
TORCH_API at::Tensor index_select_cpu_(const at::Tensor & self, int64_t dim, const at::Tensor & index);
TORCH_API at::Tensor & index_select_out_cpu_(const at::Tensor & self, int64_t dim, const at::Tensor & index, at::Tensor & out);
TORCH_API at::Tensor index_select_cuda(const at::Tensor & self, int64_t dim, const at::Tensor & index);
TORCH_API at::Tensor & index_select_out_cuda(const at::Tensor & self, int64_t dim, const at::Tensor & index, at::Tensor & out);
TORCH_API at::Tensor index_select_sparse_cpu(const at::Tensor & self, int64_t dim, const at::Tensor & index);
TORCH_API at::Tensor index_select_sparse_cuda(const at::Tensor & self, int64_t dim, const at::Tensor & index);
TORCH_API at::Tensor index_select_quantized_cpu_(const at::Tensor & self, int64_t dim, const at::Tensor & index);
TORCH_API at::Tensor index_select_quantized_cuda(const at::Tensor & self, int64_t dim, const at::Tensor & index);
TORCH_API at::Tensor index_select(const at::Tensor & self, at::Dimname dim, const at::Tensor & index);
TORCH_API at::Tensor & index_select_out(const at::Tensor & self, at::Dimname dim, const at::Tensor & index, at::Tensor & out);
} // namespace native
} // namespace at
