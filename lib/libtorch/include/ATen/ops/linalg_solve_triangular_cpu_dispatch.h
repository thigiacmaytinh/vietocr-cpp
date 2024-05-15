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

namespace cpu {

TORCH_API at::Tensor linalg_solve_triangular(const at::Tensor & self, const at::Tensor & B, bool upper, bool left=true, bool unitriangular=false);
TORCH_API at::Tensor & linalg_solve_triangular_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & B, bool upper, bool left=true, bool unitriangular=false);
TORCH_API at::Tensor & linalg_solve_triangular_outf(const at::Tensor & self, const at::Tensor & B, bool upper, bool left, bool unitriangular, at::Tensor & out);

} // namespace cpu
} // namespace at
