#include <cassert>
#include <iostream>

#include "a.hpp"

int main(int argc, char** argv) {
    assert(f() == 0);
    std::cout << "It works!" << std::endl;
}
