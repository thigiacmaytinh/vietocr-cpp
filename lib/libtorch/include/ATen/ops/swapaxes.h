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



#include <ATen/ops/swapaxes_ops.h>

namespace at {


// aten::swapaxes(Tensor(a) self, int axis0, int axis1) -> Tensor(a)
inline at::Tensor swapaxes(const at::Tensor & self, int64_t axis0, int64_t axis1) {
    return at::_ops::swapaxes::call(self, axis0, axis1);
}

}
