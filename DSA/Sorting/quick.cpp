#include <iostream>
using namespace std;

/* Quick Sort : information
    *
    * Time Complexity : O(n^2) - Worst Case
    *                   O(nlogn) - Average Case
    *                   O(nlogn) - Best Case
    * Space Complexity : O(1)
    * Stable : No
    * In-Place : Yes
    * Online : No
    * Adaptive : No
    * 
    * QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
    * 
    * There are many different versions of quickSort that pick pivot in different ways.
    * 
    * 1. Always pick first element as pivot.
    * 2. Always pick last element as pivot.
    * 3. Pick a random element as pivot.
    * 4. Pick median as pivot.
 */

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] < pivot)
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        if(arr[i] < pivot)
            i++;
        else if(arr[j] >= pivot)
            j--;
        else
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s >= e)
        return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);

    quickSort(arr, p + 1, e);
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}