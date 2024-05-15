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



#include <ATen/ops/_cdist_forward_ops.h>

namespace at {


// aten::_cdist_forward(Tensor x1, Tensor x2, float p, int? compute_mode) -> Tensor
inline at::Tensor _cdist_forward(const at::Tensor & x1, const at::Tensor & x2, double p, c10::optional<int64_t> compute_mode) {
    return at::_ops::_cdist_forward::call(x1, x2, p, compute_mode);
}

// aten::_cdist_forward.out(Tensor x1, Tensor x2, float p, int? compute_mode, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _cdist_forward_out(at::Tensor & out, const at::Tensor & x1, const at::Tensor & x2, double p, c10::optional<int64_t> compute_mode) {
    return at::_ops::_cdist_forward_out::call(x1, x2, p, compute_mode, out);
}
// aten::_cdist_forward.out(Tensor x1, Tensor x2, float p, int? compute_mode, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _cdist_forward_outf(const at::Tensor & x1, const at::Tensor & x2, double p, c10::optional<int64_t> compute_mode, at::Tensor & out) {
    return at::_ops::_cdist_forward_out::call(x1, x2, p, compute_mode, out);
}

}
