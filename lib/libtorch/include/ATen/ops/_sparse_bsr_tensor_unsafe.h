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



#include <ATen/ops/_sparse_bsr_tensor_unsafe_ops.h>

namespace at {


// aten::_sparse_bsr_tensor_unsafe(Tensor crow_indices, Tensor col_indices, Tensor values, int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor _sparse_bsr_tensor_unsafe(const at::Tensor & crow_indices, const at::Tensor & col_indices, const at::Tensor & values, at::IntArrayRef size, at::TensorOptions options={}) {
    return at::_ops::_sparse_bsr_tensor_unsafe::call(crow_indices, col_indices, values, size, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}
// aten::_sparse_bsr_tensor_unsafe(Tensor crow_indices, Tensor col_indices, Tensor values, int[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor _sparse_bsr_tensor_unsafe(const at::Tensor & crow_indices, const at::Tensor & col_indices, const at::Tensor & values, at::IntArrayRef size, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::_sparse_bsr_tensor_unsafe::call(crow_indices, col_indices, values, size, dtype, layout, device, pin_memory);
}

}
