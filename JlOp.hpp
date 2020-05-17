#pragma once

#include "IOperation.hpp"
#include "IValue.hpp"

class JlOp : public IOperation {
    const IValue *const op1_;

public:
    explicit JlOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
    ~JlOp() override;
};