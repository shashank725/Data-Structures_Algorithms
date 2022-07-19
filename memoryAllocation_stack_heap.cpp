// Stack : size is fixed
// Heap : size is not fixes

#include <iostream>
using namespace std;

int main() {
    int a = 10;               //stored in stack
    
    int *p = new int();       //"new" operator is used to allocate memory in heap
    // "p" will be stored in stack. It is a pointer to the memory allocated(memory address) in heap where the integer is storted.
    *p = 20;

    // In stack, system on its own  allocate &  deallocate memory
    // In dynamic memory allocation, we are manually allocating memory in heap so, we have to manually deallocat also.
    delete(p);                //"delete" operator is used to deallocate memory in heap but the "p" pointer will be still there in the stack (Also called dangling pointer).

    //store array of 4 integers in heap
    p = new int[4];          //"p" will store address 0th element of array.
    delete(p);               //will delete the block of memory allocated in heap.

    p=NULL;                  //to remove pointer heap(called dangling pointer).

    return 0;
}