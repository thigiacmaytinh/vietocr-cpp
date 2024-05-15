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
TORCH_API at::Tensor diff(const at::Tensor & self, int64_t n=1, int64_t dim=-1, const c10::optional<at::Tensor> & prepend={}, const c10::optional<at::Tensor> & append={});
TORCH_API at::Tensor & diff_out(const at::Tensor & self, int64_t n, int64_t dim, const c10::optional<at::Tensor> & prepend, const c10::optional<at::Tensor> & append, at::Tensor & out);
} // namespace native
} // namespace at
