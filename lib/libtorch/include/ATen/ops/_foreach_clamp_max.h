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



#include <ATen/ops/_foreach_clamp_max_ops.h>

namespace at {


// aten::_foreach_clamp_max.Scalar(Tensor[] self, Scalar scalar) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_clamp_max(at::TensorList self, const at::Scalar & scalar) {
    return at::_ops::_foreach_clamp_max_Scalar::call(self, scalar);
}

// aten::_foreach_clamp_max_.Scalar(Tensor(a!)[] self, Scalar scalar) -> ()
inline void _foreach_clamp_max_(at::TensorList self, const at::Scalar & scalar) {
    return at::_ops::_foreach_clamp_max__Scalar::call(self, scalar);
}

// aten::_foreach_clamp_max.List(Tensor[] self, Tensor[] other) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_clamp_max(at::TensorList self, at::TensorList other) {
    return at::_ops::_foreach_clamp_max_List::call(self, other);
}

// aten::_foreach_clamp_max_.List(Tensor(a!)[] self, Tensor[] other) -> ()
inline void _foreach_clamp_max_(at::TensorList self, at::TensorList other) {
    return at::_ops::_foreach_clamp_max__List::call(self, other);
}

// aten::_foreach_clamp_max.ScalarList(Tensor[] self, Scalar[] scalars) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_clamp_max(at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
    return at::_ops::_foreach_clamp_max_ScalarList::call(self, scalars);
}

// aten::_foreach_clamp_max_.ScalarList(Tensor(a!)[] self, Scalar[] scalars) -> ()
inline void _foreach_clamp_max_(at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
    return at::_ops::_foreach_clamp_max__ScalarList::call(self, scalars);
}

// aten::_foreach_clamp_max.Scalar_out(Tensor[] self, Scalar scalar, *, Tensor(a!)[] out) -> ()
inline void _foreach_clamp_max_out(at::TensorList out, at::TensorList self, const at::Scalar & scalar) {
    return at::_ops::_foreach_clamp_max_Scalar_out::call(self, scalar, out);
}
// aten::_foreach_clamp_max.Scalar_out(Tensor[] self, Scalar scalar, *, Tensor(a!)[] out) -> ()
inline void _foreach_clamp_max_outf(at::TensorList self, const at::Scalar & scalar, at::TensorList out) {
    return at::_ops::_foreach_clamp_max_Scalar_out::call(self, scalar, out);
}

// aten::_foreach_clamp_max.List_out(Tensor[] self, Tensor[] other, *, Tensor(a!)[] out) -> ()
inline void _foreach_clamp_max_out(at::TensorList out, at::TensorList self, at::TensorList other) {
    return at::_ops::_foreach_clamp_max_List_out::call(self, other, out);
}
// aten::_foreach_clamp_max.List_out(Tensor[] self, Tensor[] other, *, Tensor(a!)[] out) -> ()
inline void _foreach_clamp_max_outf(at::TensorList self, at::TensorList other, at::TensorList out) {
    return at::_ops::_foreach_clamp_max_List_out::call(self, other, out);
}

// aten::_foreach_clamp_max.ScalarList_out(Tensor[] self, Scalar[] scalars, *, Tensor(a!)[] out) -> ()
inline void _foreach_clamp_max_out(at::TensorList out, at::TensorList self, at::ArrayRef<at::Scalar> scalars) {
    return at::_ops::_foreach_clamp_max_ScalarList_out::call(self, scalars, out);
}
// aten::_foreach_clamp_max.ScalarList_out(Tensor[] self, Scalar[] scalars, *, Tensor(a!)[] out) -> ()
inline void _foreach_clamp_max_outf(at::TensorList self, at::ArrayRef<at::Scalar> scalars, at::TensorList out) {
    return at::_ops::_foreach_clamp_max_ScalarList_out::call(self, scalars, out);
}

}
