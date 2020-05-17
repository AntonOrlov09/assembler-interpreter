#pragma once

#include "memory.hpp"

class Interpreter {
public:
    void Run(Memory &mem, int maxIterations = 100) const;
};