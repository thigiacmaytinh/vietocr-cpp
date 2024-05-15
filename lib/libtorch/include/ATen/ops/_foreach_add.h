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



#include <ATen/ops/_foreach_add_ops.h>

namespace at {


// aten::_foreach_add.Scalar(Tensor[] self, Scalar scalar) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_add(at::TensorList self, const at::Scalar & scalar) {
    return at::_ops::_foreach_add_Scalar::call(self, scalar);
}

// aten::_foreach_add_.Scalar(Tensor(a!)[] self, Scalar scalar) -> ()
inline void _foreach_add_(at::TensorList self, const at::Scalar & scalar) {
    return at::_ops::_foreach_add__Scalar::call(self, scalar);
}

// aten::_foreach_add.List(Tensor[] self, Tensor[] other, *, Scalar alpha=1) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_add(at::TensorList self, at::TensorList other, const at::Scalar & alpha=1) {
    return at::_ops::_foreach_add_List::call(self, other, alpha);
}

// aten::_foreach_add_.List(Tensor(a!)[] self, Tensor[] other, *, Scalar alpha=1) -> ()
inline void _foreach_add_(at::TensorList self, at::TensorList other, const at::Scalar & alpha=1) {
    return at::_ops::_foreach_add__List::call(self, other, alpha);
}

// aten::_foreach_add.ScalarList(Tensor[] self, Scalar[] scalars) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_add(at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
    return at::_ops::_foreach_add_ScalarList::call(self, scalars);
}

// aten::_foreach_add_.ScalarList(Tensor(a!)[] self, Scalar[] scalars) -> ()
inline void _foreach_add_(at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
    return at::_ops::_foreach_add__ScalarList::call(self, scalars);
}

// aten::_foreach_add.Tensor(Tensor[] self, Tensor other, *, Scalar alpha=1) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_add(at::TensorList self, const at::Tensor & other, const at::Scalar & alpha=1) {
    return at::_ops::_foreach_add_Tensor::call(self, other, alpha);
}

// aten::_foreach_add_.Tensor(Tensor(a!)[] self, Tensor other, *, Scalar alpha=1) -> ()
inline void _foreach_add_(at::TensorList self, const at::Tensor & other, const at::Scalar & alpha=1) {
    return at::_ops::_foreach_add__Tensor::call(self, other, alpha);
}

// aten::_foreach_add.Scalar_out(Tensor[] self, Scalar scalar, *, Tensor(a!)[] out) -> ()
inline void _foreach_add_out(at::TensorList out, at::TensorList self, const at::Scalar & scalar) {
    return at::_ops::_foreach_add_Scalar_out::call(self, scalar, out);
}
// aten::_foreach_add.Scalar_out(Tensor[] self, Scalar scalar, *, Tensor(a!)[] out) -> ()
inline void _foreach_add_outf(at::TensorList self, const at::Scalar & scalar, at::TensorList out) {
    return at::_ops::_foreach_add_Scalar_out::call(self, scalar, out);
}

// aten::_foreach_add.List_out(Tensor[] self, Tensor[] other, *, Scalar alpha=1, Tensor(a!)[] out) -> ()
inline void _foreach_add_out(at::TensorList out, at::TensorList self, at::TensorList other, const at::Scalar & alpha=1) {
    return at::_ops::_foreach_add_List_out::call(self, other, alpha, out);
}
// aten::_foreach_add.List_out(Tensor[] self, Tensor[] other, *, Scalar alpha=1, Tensor(a!)[] out) -> ()
inline void _foreach_add_outf(at::TensorList self, at::TensorList other, const at::Scalar & alpha, at::TensorList out) {
    return at::_ops::_foreach_add_List_out::call(self, other, alpha, out);
}

// aten::_foreach_add.ScalarList_out(Tensor[] self, Scalar[] scalars, *, Tensor(a!)[] out) -> ()
inline void _foreach_add_out(at::TensorList out, at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
    return at::_ops::_foreach_add_ScalarList_out::call(self, scalars, out);
}
// aten::_foreach_add.ScalarList_out(Tensor[] self, Scalar[] scalars, *, Tensor(a!)[] out) -> ()
inline void _foreach_add_outf(at::TensorList self, at::ArrayRef<at::Scalar> scalars, at::TensorList out) {
    return at::_ops::_foreach_add_ScalarList_out::call(self, scalars, out);
}

// aten::_foreach_add.Tensor_out(Tensor[] self, Tensor other, *, Scalar alpha=1, Tensor(a!)[] out) -> ()
inline void _foreach_add_out(at::TensorList out, at::TensorList self, const at::Tensor & other, const at::Scalar & alpha=1) {
    return at::_ops::_foreach_add_Tensor_out::call(self, other, alpha, out);
}
// aten::_foreach_add.Tensor_out(Tensor[] self, Tensor other, *, Scalar alpha=1, Tensor(a!)[] out) -> ()
inline void _foreach_add_outf(at::TensorList self, const at::Tensor & other, const at::Scalar & alpha, at::TensorList out) {
    return at::_ops::_foreach_add_Tensor_out::call(self, other, alpha, out);
}

}
