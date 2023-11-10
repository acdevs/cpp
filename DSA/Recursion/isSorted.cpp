#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 0 || size == 1)
        return true;
    
    if(arr[0] > arr[1])
        return false;
    else
        isSorted(arr + 1, size - 1);
}

int main(){
    int arr[] = {2, 1, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    if(isSorted(arr, size))
        cout << "Sorted!";
    else
        cout << "Unsorted!";
}