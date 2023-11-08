#include <iostream>
using namespace std;

/* inline functions */

// #harami compiler cause 'inline' is a request to the compiler
// bc command nhi leta compiler!

inline void fun(){
    cout << "Hello" << endl;
}

// compiler may not perform inlining in such circumstances as: 
// 1. recursive
// 2. contains static variables
// 3. contains switch or goto
// 4. contains loop

/* default arguments */

void foo(int x = 0, int y = 0, int z = 0){
    cout << x << " " << y << " " << z << endl;
}

int main(){
    fun();
    foo();
    foo(1);
    foo(1, 2);
    foo(1, 2, 3);
}