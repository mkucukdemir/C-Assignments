#include <stdlib.h>
#include "memory_allocation_in_c.h"

namespace memory_allocation_in_c {
    int exercise()
    {
        int* p1 = (int*)malloc(1 * sizeof(int));    // only allocates
        int* p2 = (int*)calloc(1, sizeof(int));     // allocates and init as 0

        if (p1 == NULL) {
            // The memory could not be allocated
            return -1;
        }

        if (p2 == NULL) {
            // The memory could not be allocated
            return -1;
        }

        *p1 = 23;

        free(p1);   // to avoid memory leaks
        p1 = NULL;  // good practise to prevent from crashes

        free(p1);   // since p1 is set as NULL, no crash
        return 0;
    }
}