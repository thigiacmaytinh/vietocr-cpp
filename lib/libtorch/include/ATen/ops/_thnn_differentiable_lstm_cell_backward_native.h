#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _thnn_differentiable_lstm_cell_backward(const c10::optional<at::Tensor> & grad_hy, const c10::optional<at::Tensor> & grad_cy, const at::Tensor & input_gates, const at::Tensor & hidden_gates, const c10::optional<at::Tensor> & input_bias, const c10::optional<at::Tensor> & hidden_bias, const at::Tensor & cx, const at::Tensor & cy);
} // namespace native
} // namespace at
