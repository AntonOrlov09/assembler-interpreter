#pragma once

#include "memory.hpp"
class Memory;
class IOperation {
public:
    virtual void Apply(Memory &mem) = 0;
    virtual ~IOperation() = default;
};
