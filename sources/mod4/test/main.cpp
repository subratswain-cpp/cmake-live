#include "headerOnlyLib.h"

#include <iostream>

int main() {
   std::cout << "Sum = " << HeaderOnlyLibrary::sum(100, 200) << '\n';
   std::cout << "Diff = " << HeaderOnlyLibrary::diff(400, 200) << '\n';

   return 0;
}