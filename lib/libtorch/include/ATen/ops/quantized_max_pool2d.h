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



#include <ATen/ops/quantized_max_pool2d_ops.h>

namespace at {


// aten::quantized_max_pool2d(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False) -> Tensor
inline at::Tensor quantized_max_pool2d(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride={}, at::IntArrayRef padding=0, at::IntArrayRef dilation=1, bool ceil_mode=false) {
    return at::_ops::quantized_max_pool2d::call(self, kernel_size, stride, padding, dilation, ceil_mode);
}

// aten::quantized_max_pool2d.out(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantized_max_pool2d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride={}, at::IntArrayRef padding=0, at::IntArrayRef dilation=1, bool ceil_mode=false) {
    return at::_ops::quantized_max_pool2d_out::call(self, kernel_size, stride, padding, dilation, ceil_mode, out);
}
// aten::quantized_max_pool2d.out(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantized_max_pool2d_outf(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, at::Tensor & out) {
    return at::_ops::quantized_max_pool2d_out::call(self, kernel_size, stride, padding, dilation, ceil_mode, out);
}

}
