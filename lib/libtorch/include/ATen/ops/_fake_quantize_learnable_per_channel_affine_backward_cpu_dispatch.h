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

TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _fake_quantize_learnable_per_channel_affine_backward(const at::Tensor & grad, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, int64_t axis, int64_t quant_min, int64_t quant_max, double grad_factor=1.0);

} // namespace cpu
} // namespace at
