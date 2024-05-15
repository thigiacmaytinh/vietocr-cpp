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



#include <ATen/ops/meshgrid_ops.h>

namespace at {


// aten::meshgrid(Tensor[] tensors) -> Tensor[]
inline ::std::vector<at::Tensor> meshgrid(at::TensorList tensors) {
    return at::_ops::meshgrid::call(tensors);
}

// aten::meshgrid.indexing(Tensor[] tensors, *, str indexing) -> Tensor[]
inline ::std::vector<at::Tensor> meshgrid(at::TensorList tensors, c10::string_view indexing) {
    return at::_ops::meshgrid_indexing::call(tensors, indexing);
}

}
