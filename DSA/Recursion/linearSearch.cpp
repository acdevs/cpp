#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target, int i = 0){
    if(size == 0)
        return -1;
    
    if(arr[0] == target)
        return i;
    else
        linearSearch(arr + 1, size - 1, target, ++i);
}

int main(){
    int arr[]{1, 4, 2, 8, 5, 7, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = linearSearch(arr, size, 5);

    if(res == -1)
        cout << "not found!";
    else
        cout << "found at " << res + 1 << "th position!";
}