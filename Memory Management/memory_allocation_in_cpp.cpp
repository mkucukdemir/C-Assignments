#include <stdlib.h>
#include "memory_allocation_in_cpp.h"
/*
* malloc                                    new
* ---------------------------------------------------------------------------------
* function                                  operator
* size needed to call                       size is ascertained from the type
* cannot init the value in memory           can init the memory
* cannot call constructor                   call constructor
* returns void ptr                          returns correct type of ptr
* cannot be customized                      can be overloaded
* return NULL on failure                    throws exception on failure
* 
* NO REASON TO USE malloc IN CPP
*/
namespace memory_allocation_in_cpp {
    int exercise()
    {
        int* p1 = new int;                  // only allocates
        int* p2 = new int{6};               // allocates and init as 6, you cannot do that by using malloc or calloc
        int* arrp = new int[3]{1,2,3};      // allocates an array of 3 integers: 1,2,3

        *p1 = 11;

        delete p1;      // to avoid memory leaks
        p1 = nullptr;   // good practise to prevent from crashes

        delete p2;
        p2 = nullptr;

        delete []arrp;  // [] is required to deallocate whole array
        arrp == nullptr;

        //...
        // Two dimensional array
        int* r1 = new int[3];
        int* r2 = new int[3];

        int** m = new int* [2];
        m[0] = r1;
        m[1] = r2;

        m[0][0] = 100;
        m[0][1] = 101;
        m[0][2] = 102;
        m[1][0] = 200;
        m[1][1] = 201;
        m[1][2] = 202;

        delete[]r1;     // delete []m[0]
        delete[]r2;     // delete []m[1]

        delete[]m;

        return 0;
    }
}