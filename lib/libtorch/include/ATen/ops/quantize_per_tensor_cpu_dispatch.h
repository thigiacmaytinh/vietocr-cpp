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

TORCH_API at::Tensor quantize_per_tensor(const at::Tensor & self, double scale, int64_t zero_point, at::ScalarType dtype);
TORCH_API at::Tensor quantize_per_tensor(const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, at::ScalarType dtype);
TORCH_API ::std::vector<at::Tensor> quantize_per_tensor(at::TensorList tensors, const at::Tensor & scales, const at::Tensor & zero_points, at::ScalarType dtype);

} // namespace cpu
} // namespace at
