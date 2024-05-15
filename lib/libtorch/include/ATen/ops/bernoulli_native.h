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
TORCH_API at::Tensor bernoulli(const at::Tensor & self, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & bernoulli_out(const at::Tensor & self, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor bernoulli(const at::Tensor & self, const at::Tensor & p, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & bernoulli_Tensor_out(const at::Tensor & self, const at::Tensor & p, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor & bernoulli_(at::Tensor & self, const at::Tensor & p, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & bernoulli_float_out(const at::Tensor & self, double p, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor & bernoulli_(at::Tensor & self, double p=0.5, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor bernoulli(const at::Tensor & self, double p, c10::optional<at::Generator> generator=c10::nullopt);
} // namespace native
} // namespace at
