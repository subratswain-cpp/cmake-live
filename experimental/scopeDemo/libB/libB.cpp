#include "libB.h"

#include "libA.h"

#include <iostream>

void funB() {
    funA();
    std::cout << "I am funB(Updated-2)\n" << '\n';

}
