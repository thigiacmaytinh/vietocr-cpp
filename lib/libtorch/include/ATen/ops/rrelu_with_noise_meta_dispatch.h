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

TORCH_API at::Tensor & rrelu_with_noise_(at::Tensor & self, const at::Tensor & noise, const at::Scalar & lower=0.125, const at::Scalar & upper=0.3333333333333333, bool training=false, c10::optional<at::Generator> generator=c10::nullopt);

} // namespace meta
} // namespace at
