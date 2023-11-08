#include <iostream>
#include <algorithm>
using namespace std;

void inc(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] += 1;
    }
}

int main(){
    int arr[100] = {1};
    fill_n(arr, 100, -23); // use fill_n to fill the array with any value
    // cout << arr[99];

    int arr3[5] = {6, 7, 8, 9, 10};
    inc(arr3, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
}