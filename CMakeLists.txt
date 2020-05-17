cmake_minimum_required(VERSION 3.15)
project(assembler_interpreter)

set(CMAKE_CXX_STANDARD 14)

add_executable(assembler_interpreter main.cpp memory.cpp memory.hpp IOperation.hpp IValue.hpp IMutableValue.hpp ValueLiteral.cpp ValueLiteral.hpp ValueRegister.cpp ValueRegister.hpp Intepreter.cpp Intepreter.hpp AddOp.cpp AddOp.hpp CmpOp.cpp CmpOp.hpp JeOp.cpp JeOp.hpp JgOp.cpp JgOp.hpp JlOp.cpp JlOp.hpp JmpOp.cpp JmpOp.hpp MovOp.cpp MovOp.hpp MulOp.cpp MulOp.hpp PopOp.cpp PopOp.hpp PushOp.cpp PushOp.hpp)