#pragma once

#include "memory.hpp"
#include "IValue.hpp"

class IMutableValue : public IValue {
public:
    virtual void Set(Memory &mem, int value) = 0;
    ~IMutableValue() override = default;
};
