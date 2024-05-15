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



#include <ATen/ops/nested_to_padded_tensor_ops.h>

namespace at {


// aten::nested_to_padded_tensor(Tensor self, float padding, int[]? output_size=None) -> Tensor
inline at::Tensor nested_to_padded_tensor(const at::Tensor & self, double padding, at::OptionalIntArrayRef output_size=c10::nullopt) {
    return at::_ops::nested_to_padded_tensor::call(self, padding, output_size);
}

}
