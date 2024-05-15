#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API void _foreach_addcmul_Scalar_out(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value, at::TensorList out);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_addcmul_scalar_slow(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value=1);
TORCH_API void foreach_tensor_addcmul_scalar_slow_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value=1);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_addcmul_scalar_cuda(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value=1);
TORCH_API void foreach_tensor_addcmul_scalar_cuda_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Scalar & value=1);
TORCH_API void _foreach_addcmul_ScalarList_out(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars, at::TensorList out);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_addcmul_scalarlist_slow(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars);
TORCH_API void foreach_tensor_addcmul_scalarlist_slow_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_addcmul_scalarlist_cuda(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars);
TORCH_API void foreach_tensor_addcmul_scalarlist_cuda_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, at::ArrayRef<at::Scalar> scalars);
TORCH_API void _foreach_addcmul_Tensor_out(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Tensor & scalars, at::TensorList out);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_addcmul_tensor_slow(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Tensor & scalars);
TORCH_API void foreach_tensor_addcmul_tensor_slow_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Tensor & scalars);
TORCH_API ::std::vector<at::Tensor> foreach_tensor_addcmul_tensor_cuda(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Tensor & scalars);
TORCH_API void foreach_tensor_addcmul_tensor_cuda_(at::TensorList self, at::TensorList tensor1, at::TensorList tensor2, const at::Tensor & scalars);
} // namespace native
} // namespace at
