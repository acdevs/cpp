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
}
