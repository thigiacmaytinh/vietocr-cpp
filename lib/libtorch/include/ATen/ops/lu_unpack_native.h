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
#include <ATen/ops/lu_unpack_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_lu_unpack_out : public at::meta::structured_lu_unpack {
void impl(const at::Tensor & LU_data, const at::Tensor & LU_pivots, bool unpack_data, bool unpack_pivots, const at::Tensor & P, const at::Tensor & L, const at::Tensor & U);
};
} // namespace native
} // namespace at
