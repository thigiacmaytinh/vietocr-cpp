#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/layer_norm_ops.h>

namespace at {


// aten::layer_norm(Tensor input, SymInt[] normalized_shape, Tensor? weight=None, Tensor? bias=None, float eps=1e-05, bool cudnn_enable=True) -> Tensor
inline at::Tensor layer_norm(const at::Tensor & input, at::IntArrayRef normalized_shape, const c10::optional<at::Tensor> & weight={}, const c10::optional<at::Tensor> & bias={}, double eps=1e-05, bool cudnn_enable=true) {
    return at::_ops::layer_norm::call(input, c10::fromIntArrayRefSlow(normalized_shape), weight, bias, eps, cudnn_enable);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor layer_norm(const at::Tensor & input, at::IntArrayRef normalized_shape, const c10::optional<at::Tensor> & weight={}, const c10::optional<at::Tensor> & bias={}, double eps=1e-05, bool cudnn_enable=true) {
    return at::_ops::layer_norm::call(input, c10::fromIntArrayRefSlow(normalized_shape), weight, bias, eps, cudnn_enable);
  }
}

// aten::layer_norm(Tensor input, SymInt[] normalized_shape, Tensor? weight=None, Tensor? bias=None, float eps=1e-05, bool cudnn_enable=True) -> Tensor
inline at::Tensor layer_norm_symint(const at::Tensor & input, c10::SymIntArrayRef normalized_shape, const c10::optional<at::Tensor> & weight={}, const c10::optional<at::Tensor> & bias={}, double eps=1e-05, bool cudnn_enable=true) {
    return at::_ops::layer_norm::call(input, normalized_shape, weight, bias, eps, cudnn_enable);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor layer_norm(const at::Tensor & input, c10::SymIntArrayRef normalized_shape, const c10::optional<at::Tensor> & weight={}, const c10::optional<at::Tensor> & bias={}, double eps=1e-05, bool cudnn_enable=true) {
    return at::_ops::layer_norm::call(input, normalized_shape, weight, bias, eps, cudnn_enable);
  }
}

}
