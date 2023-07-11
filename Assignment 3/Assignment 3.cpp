#include <iostream>

int main()
{
    //Try to modify x1 & x2 and see the compilation output
    int x = 5;
    const int MAX = 12;
    int& ref_x1 = x;
    const int& ref_x2 = x;
    ref_x1 = 8;
    // ref_x2 = 10; // CTE: expression must be a modifiable lvalue

    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int* ptr1 = &x;
    int* const ptr2 = &x;
    const int* const ptr3 = &x;
    
    int y = 6;
    ptr1 = &y;
    // *ptr1 = 7; // CTE: expression must be a modifiable lvalue

    //Find which declarations are valid. If invalid, correct the declaration
    const int* ptr33 = &MAX;
    const int* ptr4 = &MAX; // invalid form: int* ptr4 = &MAX; // CTE: qualifiers dropped in binding reference of type "int &" to initializer of type "const int"

    const int& r1 = ref_x1;
    const int& r2 = ref_x2; // invalid form: int& r2 = ref_x2; // CTE: qualifiers dropped in binding reference of type "int &" to initializer of type "const int"

    const int*& p_ref1 = ptr1; // invalid form: int*& p_ref1 = ptr1; // CTE: a reference of type "int *&" (not const-qualified) cannot be initialized with a value of type "const int *"
    const int*const& p_ref2 = ptr2; // invalid form: const int*& p_ref2 = ptr2; // CTE: qualifiers dropped in binding reference of type "const int *&" to initializer of type "int *const"
}