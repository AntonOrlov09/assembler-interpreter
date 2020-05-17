#include "Intepreter.hpp"
#include "IOperation.hpp"

void Interpreter::Run(Memory &mem, int maxIterations) const {
    for (mem.GetReg(line);mem.GetReg(line)<mem.GetOpsCount();) {
        IOperation* a = mem.GetCurrentOp();
        a->Apply(mem);
        int b = mem.GetReg(line) + 1;
        mem.SetReg(line, b);
        maxIterations--;
    }
}
