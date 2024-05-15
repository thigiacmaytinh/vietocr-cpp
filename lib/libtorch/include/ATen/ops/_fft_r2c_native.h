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
TORCH_API at::Tensor _fft_r2c_mkl(const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool onesided);
TORCH_API at::Tensor & _fft_r2c_mkl_out(const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool onesided, at::Tensor & out);
TORCH_API at::Tensor _fft_r2c_cufft(const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool onesided);
TORCH_API at::Tensor & _fft_r2c_cufft_out(const at::Tensor & self, at::IntArrayRef dim, int64_t normalization, bool onesided, at::Tensor & out);
} // namespace native
} // namespace at
