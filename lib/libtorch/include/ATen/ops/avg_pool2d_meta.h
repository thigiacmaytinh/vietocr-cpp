#pragma once

// @generated by torchgen/gen.py from NativeMetaFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/TensorIterator.h>
#include <ATen/TensorMeta.h>
#include <tuple>
#include <vector>

namespace at {
namespace meta {

struct TORCH_API structured_avg_pool2d : public at::impl::MetaBase {
    
                template <bool KH = false, bool KW = false, bool DH = false, bool DW = false, bool PADH = false, bool PADW = false>
                struct TORCH_API precompute_out {
                    
                    precompute_out<true, KW, DH, DW, PADH, PADW> set_kH(int64_t value) {
                        static_assert(KH == false, "kH already set");
                        precompute_out<true, KW, DH, DW, PADH, PADW> ret;
ret.kH = value;
ret.kW = this->kW;
ret.dH = this->dH;
ret.dW = this->dW;
ret.padH = this->padH;
ret.padW = this->padW;
return ret;
                    }
                

                    precompute_out<KH, true, DH, DW, PADH, PADW> set_kW(int64_t value) {
                        static_assert(KW == false, "kW already set");
                        precompute_out<KH, true, DH, DW, PADH, PADW> ret;
ret.kH = this->kH;
ret.kW = value;
ret.dH = this->dH;
ret.dW = this->dW;
ret.padH = this->padH;
ret.padW = this->padW;
return ret;
                    }
                

                    precompute_out<KH, KW, true, DW, PADH, PADW> set_dH(int64_t value) {
                        static_assert(DH == false, "dH already set");
                        precompute_out<KH, KW, true, DW, PADH, PADW> ret;
ret.kH = this->kH;
ret.kW = this->kW;
ret.dH = value;
ret.dW = this->dW;
ret.padH = this->padH;
ret.padW = this->padW;
return ret;
                    }
                

                    precompute_out<KH, KW, DH, true, PADH, PADW> set_dW(int64_t value) {
                        static_assert(DW == false, "dW already set");
                        precompute_out<KH, KW, DH, true, PADH, PADW> ret;
ret.kH = this->kH;
ret.kW = this->kW;
ret.dH = this->dH;
ret.dW = value;
ret.padH = this->padH;
ret.padW = this->padW;
return ret;
                    }
                

                    precompute_out<KH, KW, DH, DW, true, PADW> set_padH(int64_t value) {
                        static_assert(PADH == false, "padH already set");
                        precompute_out<KH, KW, DH, DW, true, PADW> ret;
ret.kH = this->kH;
ret.kW = this->kW;
ret.dH = this->dH;
ret.dW = this->dW;
ret.padH = value;
ret.padW = this->padW;
return ret;
                    }
                

                    precompute_out<KH, KW, DH, DW, PADH, true> set_padW(int64_t value) {
                        static_assert(PADW == false, "padW already set");
                        precompute_out<KH, KW, DH, DW, PADH, true> ret;
ret.kH = this->kH;
ret.kW = this->kW;
ret.dH = this->dH;
ret.dW = this->dW;
ret.padH = this->padH;
ret.padW = value;
return ret;
                    }
                
                    int64_t kH;
int64_t kW;
int64_t dH;
int64_t dW;
int64_t padH;
int64_t padW;
            };
    using meta_return_ty = precompute_out <true, true, true, true, true, true>;
    meta_return_ty meta(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
};

} // namespace native
} // namespace at
