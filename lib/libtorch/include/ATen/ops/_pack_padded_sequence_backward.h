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



#include <ATen/ops/_pack_padded_sequence_backward_ops.h>

namespace at {


// aten::_pack_padded_sequence_backward(Tensor grad, SymInt[] input_size, Tensor batch_sizes, bool batch_first) -> Tensor
inline at::Tensor _pack_padded_sequence_backward(const at::Tensor & grad, at::IntArrayRef input_size, const at::Tensor & batch_sizes, bool batch_first) {
    return at::_ops::_pack_padded_sequence_backward::call(grad, c10::fromIntArrayRefSlow(input_size), batch_sizes, batch_first);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _pack_padded_sequence_backward(const at::Tensor & grad, at::IntArrayRef input_size, const at::Tensor & batch_sizes, bool batch_first) {
    return at::_ops::_pack_padded_sequence_backward::call(grad, c10::fromIntArrayRefSlow(input_size), batch_sizes, batch_first);
  }
}

// aten::_pack_padded_sequence_backward(Tensor grad, SymInt[] input_size, Tensor batch_sizes, bool batch_first) -> Tensor
inline at::Tensor _pack_padded_sequence_backward_symint(const at::Tensor & grad, c10::SymIntArrayRef input_size, const at::Tensor & batch_sizes, bool batch_first) {
    return at::_ops::_pack_padded_sequence_backward::call(grad, input_size, batch_sizes, batch_first);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _pack_padded_sequence_backward(const at::Tensor & grad, c10::SymIntArrayRef input_size, const at::Tensor & batch_sizes, bool batch_first) {
    return at::_ops::_pack_padded_sequence_backward::call(grad, input_size, batch_sizes, batch_first);
  }
}

}
