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



#include <ATen/ops/unfold_copy_ops.h>

namespace at {


// aten::unfold_copy(Tensor self, int dimension, int size, int step) -> Tensor
inline at::Tensor unfold_copy(const at::Tensor & self, int64_t dimension, int64_t size, int64_t step) {
    return at::_ops::unfold_copy::call(self, dimension, size, step);
}

// aten::unfold_copy.out(Tensor self, int dimension, int size, int step, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & unfold_copy_out(at::Tensor & out, const at::Tensor & self, int64_t dimension, int64_t size, int64_t step) {
    return at::_ops::unfold_copy_out::call(self, dimension, size, step, out);
}
// aten::unfold_copy.out(Tensor self, int dimension, int size, int step, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & unfold_copy_outf(const at::Tensor & self, int64_t dimension, int64_t size, int64_t step, at::Tensor & out) {
    return at::_ops::unfold_copy_out::call(self, dimension, size, step, out);
}

}
