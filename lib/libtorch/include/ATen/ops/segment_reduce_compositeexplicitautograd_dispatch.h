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

namespace compositeexplicitautograd {

TORCH_API at::Tensor & segment_reduce_out(at::Tensor & out, const at::Tensor & data, c10::string_view reduce, const c10::optional<at::Tensor> & lengths={}, const c10::optional<at::Tensor> & indices={}, const c10::optional<at::Tensor> & offsets={}, int64_t axis=0, bool unsafe=false, const c10::optional<at::Scalar> & initial=c10::nullopt);
TORCH_API at::Tensor & segment_reduce_outf(const at::Tensor & data, c10::string_view reduce, const c10::optional<at::Tensor> & lengths, const c10::optional<at::Tensor> & indices, const c10::optional<at::Tensor> & offsets, int64_t axis, bool unsafe, const c10::optional<at::Scalar> & initial, at::Tensor & out);

} // namespace compositeexplicitautograd
} // namespace at
