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



#include <ATen/ops/_thnn_fused_gru_cell_backward_ops.h>

namespace at {


// aten::_thnn_fused_gru_cell_backward(Tensor grad_hy, Tensor workspace, bool has_bias) -> (Tensor, Tensor, Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _thnn_fused_gru_cell_backward(const at::Tensor & grad_hy, const at::Tensor & workspace, bool has_bias) {
    return at::_ops::_thnn_fused_gru_cell_backward::call(grad_hy, workspace, has_bias);
}

// aten::_thnn_fused_gru_cell_backward.out(Tensor grad_hy, Tensor workspace, bool has_bias, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3, Tensor(e!) out4) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!), Tensor(e!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _thnn_fused_gru_cell_backward_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4, const at::Tensor & grad_hy, const at::Tensor & workspace, bool has_bias) {
    return at::_ops::_thnn_fused_gru_cell_backward_out::call(grad_hy, workspace, has_bias, out0, out1, out2, out3, out4);
}
// aten::_thnn_fused_gru_cell_backward.out(Tensor grad_hy, Tensor workspace, bool has_bias, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2, Tensor(d!) out3, Tensor(e!) out4) -> (Tensor(a!), Tensor(b!), Tensor(c!), Tensor(d!), Tensor(e!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &,at::Tensor &> _thnn_fused_gru_cell_backward_outf(const at::Tensor & grad_hy, const at::Tensor & workspace, bool has_bias, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, at::Tensor & out3, at::Tensor & out4) {
    return at::_ops::_thnn_fused_gru_cell_backward_out::call(grad_hy, workspace, has_bias, out0, out1, out2, out3, out4);
}

}
