#include <iostream>
using namespace std;

int main(){
    int *i = new int;
    // dynamic memory allocation how? 
    // new operator
    // new operator returns the address of the memory allocated
    *i = 10;
    cout << *i << endl;

    // important : 
    int *arr1 = new int[5]; // or
    int **arr2 = new int*[5];
}