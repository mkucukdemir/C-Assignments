#include <iostream>

#include "memory_allocation_in_c.h"
#include "memory_allocation_in_cpp.h"
/*
* Provides different memory areas:
* Stack - allocated automatically for local variables (managed by the runtime)
* Data section - allocated for global and static data (managed by the runtime)
* Heap - allocated at runtime (managed by the programmer)
* 
* All the memory is taken from the process address space
*/
int main()
{
    // Dynamic Memory Allocation in C: memory_allocation_in_c.cpp
    // Dynamic Memory Allocation in C++: memory_allocation_in_cpp.cpp
    return memory_allocation_in_cpp::exercise();
}