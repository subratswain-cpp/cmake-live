#pragma once // It is not part of standard C++ as of now. But it is implemented in many compilers.

namespace mod3 {
    #if(WIN32) // TODO: Not a recommened way! We'll see the best approach in upcomming session.
        __declspec(dllexport) void fun();
        __declspec(dllexport)  void myInternalFunc(); // TASK: remove __declspec(dllexport) and observe the error.
    #else
        void fun();
        void myInternalFunc();
    #endif


} // namespace mod3