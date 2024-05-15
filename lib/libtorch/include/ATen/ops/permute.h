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



#include <ATen/ops/permute_ops.h>

namespace at {


// aten::permute(Tensor(a) self, int[] dims) -> Tensor(a)
inline at::Tensor permute(const at::Tensor & self, at::IntArrayRef dims) {
    return at::_ops::permute::call(self, dims);
}

}
