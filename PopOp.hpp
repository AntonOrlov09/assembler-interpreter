#pragma once

#include "IOperation.hpp"
#include "IMutableValue.hpp"

class PopOp : public IOperation {
    IMutableValue *const op1_;

public:
    explicit PopOp(IMutableValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};