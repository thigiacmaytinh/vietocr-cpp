#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace compositeimplicitautograd {

TORCH_API at::Tensor fft_irfft(const at::Tensor & self, c10::optional<int64_t> n=c10::nullopt, int64_t dim=-1, c10::optional<c10::string_view> norm=c10::nullopt);
TORCH_API at::Tensor fft_irfft_symint(const at::Tensor & self, c10::optional<c10::SymInt> n=c10::nullopt, int64_t dim=-1, c10::optional<c10::string_view> norm=c10::nullopt);
TORCH_API at::Tensor & fft_irfft_out(at::Tensor & out, const at::Tensor & self, c10::optional<int64_t> n=c10::nullopt, int64_t dim=-1, c10::optional<c10::string_view> norm=c10::nullopt);
TORCH_API at::Tensor & fft_irfft_outf(const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<c10::string_view> norm, at::Tensor & out);
TORCH_API at::Tensor & fft_irfft_symint_out(at::Tensor & out, const at::Tensor & self, c10::optional<c10::SymInt> n=c10::nullopt, int64_t dim=-1, c10::optional<c10::string_view> norm=c10::nullopt);
TORCH_API at::Tensor & fft_irfft_symint_outf(const at::Tensor & self, c10::optional<c10::SymInt> n, int64_t dim, c10::optional<c10::string_view> norm, at::Tensor & out);

} // namespace compositeimplicitautograd
} // namespace at
