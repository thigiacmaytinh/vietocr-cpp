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
TORCH_API at::Tensor hspmm_sparse_cpu(const at::Tensor & mat1, const at::Tensor & mat2);
TORCH_API at::Tensor & hspmm_out_sparse_cpu(const at::Tensor & mat1, const at::Tensor & mat2, at::Tensor & out);
TORCH_API at::Tensor hspmm_sparse_cuda(const at::Tensor & mat1, const at::Tensor & mat2);
TORCH_API at::Tensor & hspmm_out_sparse_cuda(const at::Tensor & mat1, const at::Tensor & mat2, at::Tensor & out);
} // namespace native
} // namespace at
