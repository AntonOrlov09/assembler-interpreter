#pragma once

#include "IOperation.hpp"
#include "IValue.hpp"

class JgOp : public IOperation {
    const IValue *const op1_;

public:
    explicit JgOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
    ~JgOp() override;
};