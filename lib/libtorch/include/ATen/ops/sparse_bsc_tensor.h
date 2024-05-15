#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/sparse_bsc_tensor_ops.h>

namespace at {


// aten::sparse_bsc_tensor.ccol_row_value_size(Tensor ccol_indices, Tensor row_indices, Tensor values, int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor sparse_bsc_tensor(const at::Tensor & ccol_indices, const at::Tensor & row_indices, const at::Tensor & values, at::IntArrayRef size, at::TensorOptions options) {
    return at::_ops::sparse_bsc_tensor_ccol_row_value_size::call(ccol_indices, row_indices, values, size, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
// aten::sparse_bsc_tensor.ccol_row_value_size(Tensor ccol_indices, Tensor row_indices, Tensor values, int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor sparse_bsc_tensor(const at::Tensor & ccol_indices, const at::Tensor & row_indices, const at::Tensor & values, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::sparse_bsc_tensor_ccol_row_value_size::call(ccol_indices, row_indices, values, size, dtype, layout, device, pin_memory);
}

// aten::sparse_bsc_tensor.ccol_row_value(Tensor ccol_indices, Tensor row_indices, Tensor values, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor sparse_bsc_tensor(const at::Tensor & ccol_indices, const at::Tensor & row_indices, const at::Tensor & values, at::TensorOptions options) {
    return at::_ops::sparse_bsc_tensor_ccol_row_value::call(ccol_indices, row_indices, values, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
// aten::sparse_bsc_tensor.ccol_row_value(Tensor ccol_indices, Tensor row_indices, Tensor values, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=False) -> Tensor
inline at::Tensor sparse_bsc_tensor(const at::Tensor & ccol_indices, const at::Tensor & row_indices, const at::Tensor & values, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::sparse_bsc_tensor_ccol_row_value::call(ccol_indices, row_indices, values, dtype, layout, device, pin_memory);
}

}
