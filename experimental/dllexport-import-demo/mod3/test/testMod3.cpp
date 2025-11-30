#include "include/mod3.h"

#include <iostream>

int main() {

    mod3::fun();
    std::cout << "I am inside main() of dynamicLib test.\n";
    mod3::myInternalFunc(); // Task: Observe the error without __declspec(dllexport) in header.
}