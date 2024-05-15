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



#include <ATen/ops/full_like_ops.h>

namespace at {


// aten::full_like(Tensor self, Scalar fill_value, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor full_like(const at::Tensor & self, const at::Scalar & fill_value, at::TensorOptions options={}, c10::optional<at::MemoryFormat> memory_format=c10::nullopt) {
    return at::_ops::full_like::call(self, fill_value, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt(), c10::impl::check_tensor_options_and_extract_memory_format(options, memory_format));
}
// aten::full_like(Tensor self, Scalar fill_value, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor full_like(const at::Tensor & self, const at::Scalar & fill_value, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory, c10::optional<at::MemoryFormat> memory_format) {
    return at::_ops::full_like::call(self, fill_value, dtype, layout, device, pin_memory, memory_format);
}

// aten::full_like.out(Tensor self, Scalar fill_value, *, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & full_like_out(at::Tensor & out, const at::Tensor & self, const at::Scalar & fill_value, c10::optional<at::MemoryFormat> memory_format=c10::nullopt) {
    return at::_ops::full_like_out::call(self, fill_value, memory_format, out);
}
// aten::full_like.out(Tensor self, Scalar fill_value, *, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & full_like_outf(const at::Tensor & self, const at::Scalar & fill_value, c10::optional<at::MemoryFormat> memory_format, at::Tensor & out) {
    return at::_ops::full_like_out::call(self, fill_value, memory_format, out);
}

}
