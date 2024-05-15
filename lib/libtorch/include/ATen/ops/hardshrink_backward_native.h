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
#include <ATen/ops/hardshrink_backward_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_hardshrink_backward_out : public at::meta::structured_hardshrink_backward {
void impl(const at::Tensor & grad_out, const at::Tensor & self, const at::Scalar & lambd, const at::Tensor & grad_input);
};
} // namespace native
} // namespace at
