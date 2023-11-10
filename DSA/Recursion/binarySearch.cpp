#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int s, int e){
    //base condition
    if(s > e) return -1;
    
    int mid = s + (e - s) / 2;

    if(target < arr[mid]) binarySearch(arr, target, s, mid - 1);
    else if(target > arr[mid]) binarySearch(arr, target, mid + 1, e);
    else return mid;
}

int main(){
    int arr[]{1, 4, 6, 12, 25, 67, 100, 153};
    int len = sizeof(arr) / sizeof(arr[0]);

    int res = binarySearch(arr, 10, 0, len - 1);

    if(res == -1){
        cout << "not found!";
    }
    else{
        cout << "found at " << res + 1 << "th position! ";
    }
}