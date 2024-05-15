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
#include <ATen/ops/special_scaled_modified_bessel_k1_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_special_scaled_modified_bessel_k1_out : public at::meta::structured_special_scaled_modified_bessel_k1 {
void impl(const at::Tensor & x, const at::Tensor & out);
};
} // namespace native
} // namespace at
