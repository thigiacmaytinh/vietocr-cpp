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



#include <ATen/ops/_foobar_ops.h>

namespace at {


// aten::_foobar(Tensor self, bool arg1=True, bool arg2=True, *, bool arg3=True) -> Tensor
inline at::Tensor _foobar(const at::Tensor & self, bool arg1=true, bool arg2=true, bool arg3=true) {
    return at::_ops::_foobar::call(self, arg1, arg2, arg3);
}

// aten::_foobar.out(Tensor self, bool arg1=True, bool arg2=True, *, bool arg3=True, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _foobar_out(at::Tensor & out, const at::Tensor & self, bool arg1=true, bool arg2=true, bool arg3=true) {
    return at::_ops::_foobar_out::call(self, arg1, arg2, arg3, out);
}
// aten::_foobar.out(Tensor self, bool arg1=True, bool arg2=True, *, bool arg3=True, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _foobar_outf(const at::Tensor & self, bool arg1, bool arg2, bool arg3, at::Tensor & out) {
    return at::_ops::_foobar_out::call(self, arg1, arg2, arg3, out);
}

}
