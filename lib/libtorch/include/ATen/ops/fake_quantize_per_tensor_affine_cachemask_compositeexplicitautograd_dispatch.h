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

TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> fake_quantize_per_tensor_affine_cachemask_out(at::Tensor & out0, at::Tensor & out1, const at::Tensor & self, double scale, int64_t zero_point, int64_t quant_min, int64_t quant_max);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &> fake_quantize_per_tensor_affine_cachemask_outf(const at::Tensor & self, double scale, int64_t zero_point, int64_t quant_min, int64_t quant_max, at::Tensor & out0, at::Tensor & out1);

} // namespace compositeexplicitautograd
} // namespace at
