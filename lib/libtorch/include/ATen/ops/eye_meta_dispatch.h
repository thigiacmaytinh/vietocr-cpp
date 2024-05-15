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

TORCH_API at::Tensor & eye_out(at::Tensor & out, int64_t n);
TORCH_API at::Tensor & eye_outf(int64_t n, at::Tensor & out);
TORCH_API at::Tensor & eye_symint_out(at::Tensor & out, c10::SymInt n);
TORCH_API at::Tensor & eye_symint_outf(c10::SymInt n, at::Tensor & out);
TORCH_API at::Tensor & eye_out(at::Tensor & out, int64_t n, int64_t m);
TORCH_API at::Tensor & eye_outf(int64_t n, int64_t m, at::Tensor & out);
TORCH_API at::Tensor & eye_symint_out(at::Tensor & out, c10::SymInt n, c10::SymInt m);
TORCH_API at::Tensor & eye_symint_outf(c10::SymInt n, c10::SymInt m, at::Tensor & out);

} // namespace meta
} // namespace at
