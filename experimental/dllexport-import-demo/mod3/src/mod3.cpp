#include "include/mod3.h"

#include <iostream>
namespace mod3 {

void fun() { 
    std::cout << "I am fun() inside dynamic library(Updated)\n";
    std::cout << "Calling the intenal function\n";
    myInternalFunc();
}

void myInternalFunc() {
    std::cout << "I am internal function NOT EXPOSED directly!!!\n";
}
}  // namespace mod3
