#include "code1.h"
#include "code2.h"

#include "mod2.h"
#include "mod3.h"
#include "headerOnlyLib.h"

#include <iostream>

int main() {
    functionInCode1();
    functionInCode2();

    fun(); // Mod-2
    mod3::fun(); // Mod-3
    
    std::cout << "Sum = " << HeaderOnlyLibrary::sum(5, 3) << '\n';
    std::cout << "Diff = " << HeaderOnlyLibrary::diff(5, 3) << '\n';

    std::cout << "We have successfuly built and run the executables in MAC, Win & Linux OS\n";

    return 0;
}
