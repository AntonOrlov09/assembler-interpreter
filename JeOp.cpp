#include <iostream>
#include "JeOp.hpp"

void JeOp::Apply(Memory &mem) {
    if (mem.GetReg(cmp)==0) {
        mem.SetReg(line,mem.GetReg(line)+op1_->Get(mem));
    }
}

JeOp::~JeOp() {
    delete op1_;
    std::cout<<"~JeOp"<<std::endl;

}
