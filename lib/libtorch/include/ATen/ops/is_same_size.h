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



#include <ATen/ops/is_same_size_ops.h>

namespace at {


// aten::is_same_size(Tensor self, Tensor other) -> bool
inline bool is_same_size(const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::is_same_size::call(self, other);
}

}
