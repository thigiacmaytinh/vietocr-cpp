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
TORCH_API at::Tensor zeros(at::IntArrayRef size, c10::optional<at::DimnameList> names, c10::optional<at::ScalarType> dtype={}, c10::optional<at::Layout> layout={}, c10::optional<at::Device> device={}, c10::optional<bool> pin_memory={});
TORCH_API at::Tensor & zeros_names_out(at::IntArrayRef size, c10::optional<at::DimnameList> names, at::Tensor & out);
TORCH_API at::Tensor zeros_symint(c10::SymIntArrayRef size, c10::optional<at::ScalarType> dtype={}, c10::optional<at::Layout> layout={}, c10::optional<at::Device> device={}, c10::optional<bool> pin_memory={});
TORCH_API at::Tensor & zeros_out(at::IntArrayRef size, at::Tensor & out);
TORCH_API at::Tensor & zeros_sparse_out(at::IntArrayRef size, at::Tensor & out);
} // namespace native
} // namespace at
