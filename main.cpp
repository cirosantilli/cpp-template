#include <cassert>
#include <cstdlib>
#include <iostream>

#include "a.hpp"

int main(int argc, char** argv) {
    assert(f() == 0);
    std::string s;
    std::cout << "Enter a line:\n";
    std::getline(std::cin, s);
    std::cout << "stdin = " << s << "\n";
    if (argc > 1)
        std::cout << "argv[1] = " << argv[1] << "\n";
    std::cerr << "stderr\n";
    std::cerr.flush();
    std::cout << "It compiles!" << "\n";
    exit(0);
}
