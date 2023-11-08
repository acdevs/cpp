#include <iostream>
using namespace std;

/* Selection Sort : information
    *
    * Time Complexity : O(n^2) - Worst Case
    *                   O(n^2) - Average Case
    *                   O(n^2) - Best Case
    * Space Complexity : O(1)
    * Stable : No // 5 5 2
    * In-Place : Yes
    * Online : No
    * Adaptive : No // why? because it always runs in O(n^2) time.
    * 
    * Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.
    * 
    * Selection sort is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end.
    * 
    * Initially, the sorted part is empty and the unsorted part is the entire list.
 */

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
