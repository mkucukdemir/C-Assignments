#include <iostream>
#include "Function.h"

int main()
{
    int* a = new int{7};
    int* b = new int{19};
    std::cout << Add(a, b) << std::endl;

    int* result = new int{ 0 };
    AddVal(a, b, result);
    std::cout << *result << std::endl;

    std::cout << "Before swap; a: " << *a << ", b: " << *b << std::endl;
    Swap(a, b);
    std::cout << "After swap; a: " << *a << ", b: " << *b << std::endl;

    Factorial(b,result);
    std::cout << *result << std::endl;
}