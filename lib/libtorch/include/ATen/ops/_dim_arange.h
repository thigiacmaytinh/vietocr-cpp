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



#include <ATen/ops/_dim_arange_ops.h>

namespace at {


// aten::_dim_arange(Tensor like, int dim) -> Tensor
inline at::Tensor _dim_arange(const at::Tensor & like, int64_t dim) {
    return at::_ops::_dim_arange::call(like, dim);
}

}
