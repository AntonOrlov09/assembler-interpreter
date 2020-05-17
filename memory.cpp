

#include "memory.hpp"

IOperation *Memory::GetCurrentOp() const {
    return instructions.at(GetReg(line));
}

int Memory::GetOpsCount() const {
    return instructions.size();
}

void Memory::PushOp(IOperation *op) {
    instructions.push_back(op);
}

int Memory::GetReg(Register reg) const {
    return registers.find(reg)->second;
}

void Memory::SetReg(Register reg, int value) {
    registers.find(reg)->second = value;
}

void Memory::Push(int value) {

}

int Memory::Pop() {
    return 0;
}

Memory::~Memory() {
    for (auto& instruction: instructions ) {
        delete instruction;
    }

}
