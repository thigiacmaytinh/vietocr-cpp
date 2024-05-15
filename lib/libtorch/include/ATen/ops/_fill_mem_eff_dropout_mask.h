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



#include <ATen/ops/_fill_mem_eff_dropout_mask_ops.h>

namespace at {


// aten::_fill_mem_eff_dropout_mask_(Tensor(a!) self, float dropout_p, int seed, int offset) -> Tensor(a!)
inline at::Tensor & _fill_mem_eff_dropout_mask_(at::Tensor & self, double dropout_p, int64_t seed, int64_t offset) {
    return at::_ops::_fill_mem_eff_dropout_mask_::call(self, dropout_p, seed, offset);
}

}
