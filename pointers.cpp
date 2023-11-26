#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int* p1 = &a;
    int* const p2 = &a;
    const int* p3 = &a;
    const int* const p4 = &a;

    p1 = &b; // allowed

    // p2 = &b; // not allowed
    *p2 = 2; // allowed 

    p3 = &b; // allowed
    // *p3 = 3; // not allowed

    // p4 = &b; // not allowed
    // *p4 = 4; // not allowed

    /* Types of Pointer */
    /* 1. NULL Pointer */
    int *p5 = NULL; //nullptr ?? 

    /* 2. Void Pointer : generic pointer that can be typecasted into ...*/
    void *p6 = &a;

    /* 3. Wild Pointer : pointer that has not been initialized */
    // int *p7; // wild pointer

    /* 4. Dangling Pointer : pointer that points to a memory location that has been deleted */
    int *p8 = new int(5);
    delete p8;

    /* 5. Garbage Pointer : pointer that points to a memory location that has not been initialized */
    int *p9 = new int;


    /* Address Typcasting */
    int i = 65; 
    int *p10 = &i;
    char *pc = (char*) p10;
}
