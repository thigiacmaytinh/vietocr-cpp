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

TORCH_API at::Tensor _softmax_backward_data(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, at::ScalarType input_dtype);
TORCH_API at::Tensor & _softmax_backward_data_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, at::ScalarType input_dtype);
TORCH_API at::Tensor & _softmax_backward_data_outf(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, at::ScalarType input_dtype, at::Tensor & grad_input);

} // namespace cuda
} // namespace at
