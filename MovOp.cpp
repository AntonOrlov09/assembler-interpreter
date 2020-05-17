#include "MovOp.hpp"
#include <iostream>

void MovOp::Apply(Memory &mem) {
    op1_->Set(mem,op2_->Get(mem));
}

MovOp::~MovOp() {
    delete op1_;
    delete op2_;
    std::cout << "~MovOp" << std::endl;

}
