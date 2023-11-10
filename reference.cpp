#include <iostream>
using namespace std;

// pass by reference
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

// this is called return by reference
int &max(int &x, int &y){
    if(x > y){
        return x;
    }
    return y;
}

void print(int (&arr)[6]){ // reference to an array
    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;
}

int main(){

    int arr[6]{1, 2, 3, 4, 5, 6};
    print(arr);

    // Reference to an array
    // int (&arr2)[6] = arr;

    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;



    int *x = new int(4); // ? what this is doing : creating a pointer to an integer and assigning it a value 4
    // int *y = new int(6);
    // cout << *x << endl;

    int a = 4;
    int b = 6; 

    // swaping addresses of x and y. is it? because x and y are pointers

    // swap(x , y);
    // cout << *x << " " << *y << endl;

    cout << max(a, b) << endl;
    max(a, b) = 0;
    cout << a << " " << b << endl;
}