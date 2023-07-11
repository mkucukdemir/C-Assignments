#include <iostream>
#include "Function.h"

int main()
{
    int a{ 7 };
    int b{ 19 };

    int result{ 0 };
    Add(a, b, result);
    std::cout << result << std::endl;

    std::cout << "Before swap; a: " << a << ", b: " << b << std::endl;
    Swap(a, b);
    std::cout << "After swap; a: " << a << ", b: " << b << std::endl;

    Factorial(b, result);
    std::cout << result << std::endl;
}