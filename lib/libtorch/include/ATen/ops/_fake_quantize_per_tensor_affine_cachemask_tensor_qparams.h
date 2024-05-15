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



#include <ATen/ops/_fake_quantize_per_tensor_affine_cachemask_tensor_qparams_ops.h>

namespace at {


// aten::_fake_quantize_per_tensor_affine_cachemask_tensor_qparams(Tensor self, Tensor scale, Tensor zero_point, Tensor fake_quant_enabled, int quant_min, int quant_max) -> (Tensor output, Tensor mask)
inline ::std::tuple<at::Tensor,at::Tensor> _fake_quantize_per_tensor_affine_cachemask_tensor_qparams(const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, const at::Tensor & fake_quant_enabled, int64_t quant_min, int64_t quant_max) {
    return at::_ops::_fake_quantize_per_tensor_affine_cachemask_tensor_qparams::call(self, scale, zero_point, fake_quant_enabled, quant_min, quant_max);
}

// aten::_fake_quantize_per_tensor_affine_cachemask_tensor_qparams.out(Tensor self, Tensor scale, Tensor zero_point, Tensor fake_quant_enabled, int quant_min, int quant_max, *, Tensor(a!) out0, Tensor(b!) out1) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> _fake_quantize_per_tensor_affine_cachemask_tensor_qparams_out(at::Tensor & out0, at::Tensor & out1, const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, const at::Tensor & fake_quant_enabled, int64_t quant_min, int64_t quant_max) {
    return at::_ops::_fake_quantize_per_tensor_affine_cachemask_tensor_qparams_out::call(self, scale, zero_point, fake_quant_enabled, quant_min, quant_max, out0, out1);
}
// aten::_fake_quantize_per_tensor_affine_cachemask_tensor_qparams.out(Tensor self, Tensor scale, Tensor zero_point, Tensor fake_quant_enabled, int quant_min, int quant_max, *, Tensor(a!) out0, Tensor(b!) out1) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> _fake_quantize_per_tensor_affine_cachemask_tensor_qparams_outf(const at::Tensor & self, const at::Tensor & scale, const at::Tensor & zero_point, const at::Tensor & fake_quant_enabled, int64_t quant_min, int64_t quant_max, at::Tensor & out0, at::Tensor & out1) {
    return at::_ops::_fake_quantize_per_tensor_affine_cachemask_tensor_qparams_out::call(self, scale, zero_point, fake_quant_enabled, quant_min, quant_max, out0, out1);
}

}
