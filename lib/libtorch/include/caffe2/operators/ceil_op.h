#ifndef CAFFE2_OPERATORS_CEIL_OP_H_
#define CAFFE2_OPERATORS_CEIL_OP_H_

#include "caffe2/core/common_omp.h"
#include "caffe2/core/context.h"
#include "caffe2/core/logging.h"
#include "caffe2/core/operator.h"
#include <c10/util/irange.h>

namespace caffe2 {

template <typename T, class Context>
class CeilOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  USE_SIMPLE_CTOR_DTOR(CeilOp);

  bool RunOnDevice() override {
    auto& X = Input(0);

    auto *const Y = Output(0, X.sizes(), at::dtype<float>());

    const float *const Xdata = X.template data<float>();
    float *const Ydata = Y->template mutable_data<float>();
    for (const auto i : c10::irange(X.numel())) {
      Ydata[i] = std::ceil(Xdata[i]);
    }
    return true;
  }
};

} // namespace caffe2

#endif // CAFFE2_OPERATORS_CEIL_OP_H_
