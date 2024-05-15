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
TORCH_API at::Tensor index_fill(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value);
TORCH_API at::Tensor & index_fill_int_Scalar_out(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value, at::Tensor & out);
TORCH_API at::Tensor & index_fill_(at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Scalar & value);
TORCH_API at::Tensor index_fill(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & value);
TORCH_API at::Tensor & index_fill_int_Tensor_out(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & value, at::Tensor & out);
TORCH_API at::Tensor & index_fill_(at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & value);
TORCH_API at::Tensor & index_fill_(at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Scalar & value);
TORCH_API at::Tensor index_fill(const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Scalar & value);
TORCH_API at::Tensor & index_fill_(at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & value);
TORCH_API at::Tensor index_fill(const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & value);
} // namespace native
} // namespace at
