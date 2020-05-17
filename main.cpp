#include <iostream>
#include <cassert>
#include "Intepreter.hpp"
#include "MovOp.hpp"
#include "MulOp.hpp"
#include "AddOp.hpp"
#include "CmpOp.hpp"
#include "JgOp.hpp"
#include "ValueRegister.hpp"
#include "ValueLiteral.hpp"

int main() {
    Interpreter interpreter;
    Memory mem;

// "вставляем" код в память нашего fantasy-компьютера
// обратите внимание, что все операторы принимают на вход интерфейсы операндов.
    mem.PushOp(new MovOp(new ValueRegister(r0), new ValueLiteral(5))); // первый операнд обязан быть IMutableValue, а второй может быть просто IValue
    mem.PushOp(new MovOp(new ValueRegister(r1), new ValueLiteral(1)));
    mem.PushOp(new MulOp(new ValueRegister(r1), new ValueRegister(r0)));
    mem.PushOp(new AddOp(new ValueRegister(r0), new ValueLiteral(-1)));
    mem.PushOp(new CmpOp(new ValueRegister(r0), new ValueLiteral(0)));
    mem.PushOp( new JgOp(new ValueLiteral(-4))); // например тут сказано, что можно подавать IValue

    interpreter.Run(mem);

    assert(mem.GetReg(r1) == 1 * 2 * 3 * 4 * 5);
    assert(mem.GetReg(r0) == 0);
    return 0;
}