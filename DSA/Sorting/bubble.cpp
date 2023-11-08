#include <iostream>
#include <vector>
using namespace std;

/* Bubble sort : information
    *
    * Time Complexity : O(n^2) - Worst Case
    *                   O(n^2) - Average Case
    *                   O(n) - Best Case
    * Space Complexity : O(1)
    * Stable : Yes
    * In-Place : Yes
    * Online : Yes
    * Adaptive : Yes // If the array is already sorted, bubble sort takes O(n) time.
    * 
    * Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
 */

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {5, 2, 8, 3, 1, 6};
    bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
