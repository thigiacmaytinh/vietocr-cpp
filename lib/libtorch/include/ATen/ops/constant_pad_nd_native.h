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
TORCH_API at::Tensor constant_pad_nd(const at::Tensor & self, at::IntArrayRef pad, const at::Scalar & value=0);
TORCH_API at::Tensor & constant_pad_nd_out_symint(const at::Tensor & self, c10::SymIntArrayRef pad, const at::Scalar & value, at::Tensor & out);
} // namespace native
} // namespace at
