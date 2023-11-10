#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    if(size == 0)
        return 0;
    
    return arr[0] + sumOfArray(arr + 1, size - 1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumOfArray(arr, size);
    cout << "Sum is " << sum;
}