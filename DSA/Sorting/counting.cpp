#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

/* Counting Sort : information
    * 
    * Time Complexity : O(n + k) - Worst Case
    *                   O(n + k) - Average Case
    *                   O(n + k) - Best Case
    * Space Complexity : O(n + k)
    * Stable : Yes
    * In-Place : No
    * 
    * Counting sort is a sorting technique based on keys between a specific range.
    * It works by counting the number of objects having distinct key values (kind of hashing).
*/

void countingSort(vector<int>& arr) {
    int maxVal = *max_element(arr.begin(), arr.end());

    vector<int> count(maxVal + 1, 0);
    vector<int> sortedArr(arr.size());

    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }

    /* gajab hai yaar */

    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        sortedArr[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    arr = sortedArr;
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    
    countingSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
