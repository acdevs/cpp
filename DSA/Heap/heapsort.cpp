#include <iostream>
using namespace std;

/* 
    * Heap sort is a comparison based sorting technique based on Binary Heap data structure.
    * It is similar to selection sort where we first find the maximum element and place the maximum element at the end.
    * 
    * Time Complexity : O(nlogn) - Worst Case
    *                  O(nlogn) - Average Case
    *                 O(nlogn) - Best Case
    Algorithm:
    * 1. Build a max heap
    * 2. Swap the first and last element
    * 3. Decrease the size of the heap by 1
    * 4. Heapify the root of the tree
    * 5. Repeat steps 2-4 until size of the heap is 1    
*/

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    
    if(left <= size && arr[largest] < arr[left])
        largest = left;
    if(right <= size && arr[largest] < arr[right])
        largest = right;
    
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size){
    while(size > 1){
        swap(arr[1], arr[size]);
        size--;

        heapify(arr, size, 1);
    }
}

int main(){
    int arr[] = {-1, 54, 53, 55, 52, 50};
    int size = sizeof(arr) / sizeof(int);

    heapSort(arr, size - 1);

    for(int i = 1; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}