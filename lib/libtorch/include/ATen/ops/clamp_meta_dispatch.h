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

namespace meta {

TORCH_API at::Tensor clamp(const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max=c10::nullopt);
TORCH_API at::Tensor & clamp_out(at::Tensor & out, const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max=c10::nullopt);
TORCH_API at::Tensor & clamp_outf(const at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max, at::Tensor & out);
TORCH_API at::Tensor & clamp_(at::Tensor & self, const c10::optional<at::Scalar> & min, const c10::optional<at::Scalar> & max=c10::nullopt);
TORCH_API at::Tensor clamp(const at::Tensor & self, const c10::optional<at::Tensor> & min={}, const c10::optional<at::Tensor> & max={});
TORCH_API at::Tensor & clamp_out(at::Tensor & out, const at::Tensor & self, const c10::optional<at::Tensor> & min={}, const c10::optional<at::Tensor> & max={});
TORCH_API at::Tensor & clamp_outf(const at::Tensor & self, const c10::optional<at::Tensor> & min, const c10::optional<at::Tensor> & max, at::Tensor & out);
TORCH_API at::Tensor & clamp_(at::Tensor & self, const c10::optional<at::Tensor> & min={}, const c10::optional<at::Tensor> & max={});

} // namespace meta
} // namespace at
