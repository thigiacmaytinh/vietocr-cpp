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



#include <ATen/ops/_fused_moving_avg_obs_fq_helper_ops.h>

namespace at {


// aten::_fused_moving_avg_obs_fq_helper(Tensor self, Tensor observer_on, Tensor fake_quant_on, Tensor(a!) running_min, Tensor(b!) running_max, Tensor(c!) scale, Tensor(d!) zero_point, float averaging_const, int quant_min, int quant_max, int ch_axis, bool per_row_fake_quant=False, bool symmetric_quant=False) -> (Tensor output, Tensor mask)
inline ::std::tuple<at::Tensor,at::Tensor> _fused_moving_avg_obs_fq_helper(const at::Tensor & self, const at::Tensor & observer_on, const at::Tensor & fake_quant_on, at::Tensor & running_min, at::Tensor & running_max, at::Tensor & scale, at::Tensor & zero_point, double averaging_const, int64_t quant_min, int64_t quant_max, int64_t ch_axis, bool per_row_fake_quant=false, bool symmetric_quant=false) {
    return at::_ops::_fused_moving_avg_obs_fq_helper::call(self, observer_on, fake_quant_on, running_min, running_max, scale, zero_point, averaging_const, quant_min, quant_max, ch_axis, per_row_fake_quant, symmetric_quant);
}

// aten::_fused_moving_avg_obs_fq_helper.out(Tensor self, Tensor observer_on, Tensor fake_quant_on, Tensor(a!) running_min, Tensor(b!) running_max, Tensor(c!) scale, Tensor(d!) zero_point, float averaging_const, int quant_min, int quant_max, int ch_axis, bool per_row_fake_quant=False, bool symmetric_quant=False, *, Tensor(e!) out0, Tensor(f!) out1) -> (Tensor(e!), Tensor(f!))
inline ::std::tuple<at::Tensor &,at::Tensor &> _fused_moving_avg_obs_fq_helper_out(at::Tensor & out0, at::Tensor & out1, const at::Tensor & self, const at::Tensor & observer_on, const at::Tensor & fake_quant_on, at::Tensor & running_min, at::Tensor & running_max, at::Tensor & scale, at::Tensor & zero_point, double averaging_const, int64_t quant_min, int64_t quant_max, int64_t ch_axis, bool per_row_fake_quant=false, bool symmetric_quant=false) {
    return at::_ops::_fused_moving_avg_obs_fq_helper_out::call(self, observer_on, fake_quant_on, running_min, running_max, scale, zero_point, averaging_const, quant_min, quant_max, ch_axis, per_row_fake_quant, symmetric_quant, out0, out1);
}
// aten::_fused_moving_avg_obs_fq_helper.out(Tensor self, Tensor observer_on, Tensor fake_quant_on, Tensor(a!) running_min, Tensor(b!) running_max, Tensor(c!) scale, Tensor(d!) zero_point, float averaging_const, int quant_min, int quant_max, int ch_axis, bool per_row_fake_quant=False, bool symmetric_quant=False, *, Tensor(e!) out0, Tensor(f!) out1) -> (Tensor(e!), Tensor(f!))
inline ::std::tuple<at::Tensor &,at::Tensor &> _fused_moving_avg_obs_fq_helper_outf(const at::Tensor & self, const at::Tensor & observer_on, const at::Tensor & fake_quant_on, at::Tensor & running_min, at::Tensor & running_max, at::Tensor & scale, at::Tensor & zero_point, double averaging_const, int64_t quant_min, int64_t quant_max, int64_t ch_axis, bool per_row_fake_quant, bool symmetric_quant, at::Tensor & out0, at::Tensor & out1) {
    return at::_ops::_fused_moving_avg_obs_fq_helper_out::call(self, observer_on, fake_quant_on, running_min, running_max, scale, zero_point, averaging_const, quant_min, quant_max, ch_axis, per_row_fake_quant, symmetric_quant, out0, out1);
}

// aten::_fused_moving_avg_obs_fq_helper_functional(Tensor self, Tensor observer_on, Tensor fake_quant_on, Tensor running_min, Tensor running_max, Tensor scale, Tensor zero_point, float averaging_const, int quant_min, int quant_max, int ch_axis, bool per_row_fake_quant=False, bool symmetric_quant=False) -> (Tensor output, Tensor mask, Tensor running_min_out, Tensor running_max_out, Tensor scale_out, Tensor zero_point_out)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> _fused_moving_avg_obs_fq_helper_functional(const at::Tensor & self, const at::Tensor & observer_on, const at::Tensor & fake_quant_on, const at::Tensor & running_min, const at::Tensor & running_max, const at::Tensor & scale, const at::Tensor & zero_point, double averaging_const, int64_t quant_min, int64_t quant_max, int64_t ch_axis, bool per_row_fake_quant=false, bool symmetric_quant=false) {
    return at::_ops::_fused_moving_avg_obs_fq_helper_functional::call(self, observer_on, fake_quant_on, running_min, running_max, scale, zero_point, averaging_const, quant_min, quant_max, ch_axis, per_row_fake_quant, symmetric_quant);
}

}
