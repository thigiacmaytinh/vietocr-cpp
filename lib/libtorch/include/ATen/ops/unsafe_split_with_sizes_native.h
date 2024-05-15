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
TORCH_API ::std::vector<at::Tensor> unsafe_split_with_sizes(const at::Tensor & self, at::IntArrayRef split_sizes, int64_t dim=0);
TORCH_API void unsafe_split_with_sizes_out_symint(const at::Tensor & self, c10::SymIntArrayRef split_sizes, int64_t dim, at::TensorList out);
} // namespace native
} // namespace at
