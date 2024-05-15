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

namespace cuda {

TORCH_API at::Tensor linalg_lu_solve(const at::Tensor & LU, const at::Tensor & pivots, const at::Tensor & B, bool left=true, bool adjoint=false);
TORCH_API at::Tensor & linalg_lu_solve_out(at::Tensor & out, const at::Tensor & LU, const at::Tensor & pivots, const at::Tensor & B, bool left=true, bool adjoint=false);
TORCH_API at::Tensor & linalg_lu_solve_outf(const at::Tensor & LU, const at::Tensor & pivots, const at::Tensor & B, bool left, bool adjoint, at::Tensor & out);

} // namespace cuda
} // namespace at
