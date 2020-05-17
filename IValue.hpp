#pragma once

#include "memory.hpp"
class IValue {
public:
    virtual int Get(const Memory &mem) const = 0;
    virtual ~IValue() = default;
};
