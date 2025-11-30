#pragma once // It is not part of standard C++ as of now. But it is implemented in many compilers.

namespace mod3 {
    __declspec(dllexport) void fun();
    __declspec(dllexport)  void myInternalFunc(); // TASK: remove __declspec(dllexport) and observe the error.
} // namespace mod3