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



#include <ATen/ops/_nested_tensor_softmax_with_shape_ops.h>

namespace at {


// aten::_nested_tensor_softmax_with_shape(Tensor self, Tensor query) -> Tensor
inline at::Tensor _nested_tensor_softmax_with_shape(const at::Tensor & self, const at::Tensor & query) {
    return at::_ops::_nested_tensor_softmax_with_shape::call(self, query);
}

}
