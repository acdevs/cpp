#include <iostream>
using namespace std;

int main(){
    char s[6] = "abcde";
    cout << s << endl;

    char *ptr = &s[0];
    cout << ptr << endl;

    char *t = "hello"; // aisa mat karna.. kyon? dekho neeche
    // first, a temporary memory location is created and the string "hello" is stored there.
    // then, the pointer t is assigned the address of the temporary memory location.
    cout << t << endl;



    /* functions and pointers : pointers are passed by value p.. however can change the value *p */

    /* fun(int arr[]) == fun(int *arr), so we can pass part of arrays like fun(arr + 3)*/
}