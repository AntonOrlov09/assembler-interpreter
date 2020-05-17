#include <iostream>
#include "ValueLiteral.hpp"

int ValueLiteral::Get(const Memory &mem) const {
    return value_;
}

ValueLiteral::~ValueLiteral() {
    std::cout << "~ValueLiteral" << std::endl;

}
