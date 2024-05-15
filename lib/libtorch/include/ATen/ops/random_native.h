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
TORCH_API at::Tensor random(const at::Tensor & self, int64_t from, c10::optional<int64_t> to, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & random_from_out(const at::Tensor & self, int64_t from, c10::optional<int64_t> to, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor & random_(at::Tensor & self, int64_t from, c10::optional<int64_t> to, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & random_meta_(at::Tensor & self, int64_t from, c10::optional<int64_t> to, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor random(const at::Tensor & self, int64_t to, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & random_to_out(const at::Tensor & self, int64_t to, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor & random_(at::Tensor & self, int64_t to, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & random_meta_(at::Tensor & self, int64_t to, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor random(const at::Tensor & self, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & random_out(const at::Tensor & self, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor & random_(at::Tensor & self, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & random_meta_(at::Tensor & self, c10::optional<at::Generator> generator=c10::nullopt);
} // namespace native
} // namespace at
