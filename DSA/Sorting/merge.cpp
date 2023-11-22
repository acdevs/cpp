#include <iostream>
using namespace std;

/* Merge sort : information 
    *
    * Time Complexity : O(nlogn) - Worst Case
    *                   O(nlogn) - Average Case
    *                   O(nlogn) - Best Case
    * Space Complexity : O(n)
    * Stable : Yes
    * In-Place : No
    * Online : No
    * Adaptive : No
    * 
    * Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves.
*/

// method 1 : using extra space

void merge(int arr[], int s, int e){
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy elements to arrays
    for(int i = 0; i < len1; i++){
        first[i] = arr[s + i];
    }
    for(int i = 0; i < len2; i++){
        second[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = s; // k is the index of the merged array / original array
    while(i < len1 && j < len2){
        if(first[i] < second[j])
            arr[k++] = first[i++];
        else
            arr[k++] = second[j++];
    }

    while(i < len1)
        arr[k++] = first[i++];
    while(j < len2)
        arr[k++] = second[j++];

    delete[] first;
    delete[] second;
}

// method 2 : without using extra space

void mergeSort(int arr[], int s, int e){
    if(s >= e)
        return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);

    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}