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



#include <ATen/ops/_foreach_frac_ops.h>

namespace at {


// aten::_foreach_frac(Tensor[] self) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_frac(at::TensorList self) {
    return at::_ops::_foreach_frac::call(self);
}

// aten::_foreach_frac_(Tensor(a!)[] self) -> ()
inline void _foreach_frac_(at::TensorList self) {
    return at::_ops::_foreach_frac_::call(self);
}

// aten::_foreach_frac.out(Tensor[] self, *, Tensor(a!)[] out) -> ()
inline void _foreach_frac_out(at::TensorList out, at::TensorList self) {
    return at::_ops::_foreach_frac_out::call(self, out);
}
// aten::_foreach_frac.out(Tensor[] self, *, Tensor(a!)[] out) -> ()
inline void _foreach_frac_outf(at::TensorList self, at::TensorList out) {
    return at::_ops::_foreach_frac_out::call(self, out);
}

}
