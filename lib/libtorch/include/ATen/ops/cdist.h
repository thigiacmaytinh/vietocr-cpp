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



#include <ATen/ops/cdist_ops.h>

namespace at {


// aten::cdist(Tensor x1, Tensor x2, float p=2, int? compute_mode=None) -> Tensor
inline at::Tensor cdist(const at::Tensor & x1, const at::Tensor & x2, double p=2, c10::optional<int64_t> compute_mode=c10::nullopt) {
    return at::_ops::cdist::call(x1, x2, p, compute_mode);
}

}
