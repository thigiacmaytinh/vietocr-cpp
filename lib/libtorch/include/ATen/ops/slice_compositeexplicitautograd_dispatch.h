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

TORCH_API at::Tensor slice(const at::Tensor & self, int64_t dim=0, c10::optional<int64_t> start=c10::nullopt, c10::optional<int64_t> end=c10::nullopt, int64_t step=1);
TORCH_API at::Tensor slice_symint(const at::Tensor & self, int64_t dim=0, c10::optional<c10::SymInt> start=c10::nullopt, c10::optional<c10::SymInt> end=c10::nullopt, c10::SymInt step=1);

} // namespace compositeexplicitautograd
} // namespace at
