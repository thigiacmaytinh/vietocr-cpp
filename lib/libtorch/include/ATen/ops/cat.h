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



#include <ATen/ops/cat_ops.h>

namespace at {


// aten::cat(Tensor[] tensors, int dim=0) -> Tensor
inline at::Tensor cat(const at::ITensorListRef & tensors, int64_t dim=0) {
    return at::_ops::cat::call(tensors, dim);
}

// aten::cat.out(Tensor[] tensors, int dim=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cat_out(at::Tensor & out, const at::ITensorListRef & tensors, int64_t dim=0) {
    return at::_ops::cat_out::call(tensors, dim, out);
}
// aten::cat.out(Tensor[] tensors, int dim=0, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cat_outf(const at::ITensorListRef & tensors, int64_t dim, at::Tensor & out) {
    return at::_ops::cat_out::call(tensors, dim, out);
}

// aten::cat.names(Tensor[] tensors, Dimname dim) -> Tensor
inline at::Tensor cat(at::TensorList tensors, at::Dimname dim) {
    return at::_ops::cat_names::call(tensors, dim);
}

// aten::cat.names_out(Tensor[] tensors, Dimname dim, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cat_out(at::Tensor & out, at::TensorList tensors, at::Dimname dim) {
    return at::_ops::cat_names_out::call(tensors, dim, out);
}
// aten::cat.names_out(Tensor[] tensors, Dimname dim, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cat_outf(at::TensorList tensors, at::Dimname dim, at::Tensor & out) {
    return at::_ops::cat_names_out::call(tensors, dim, out);
}

}
