#include <iostream>
#include <vector>
using namespace std;

/* Insertion Sort : information
    *
    * Time Complexity : O(n^2) - Worst Case
    *                   O(n^2) - Average Case
    *                   O(n) - Best Case
    * Space Complexity : O(1)
    * Stable : Yes
    * In-Place : Yes
    * Online : Yes
    * Adaptive : Yes // If the array is already sorted, insertion sort takes O(n) time.
    * 
    * Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
    * 
    * Insertion sort works similarly as we sort cards in our hand in a card game.
 */

void insertionSort(vector<int>& arr){
    int n = arr.size();

    for(int i = 0; i < n - 1; i++){

        /* Shift */
        int j = i + 1;
        int temp = arr[j];
        while(j > 0){
            if(temp < arr[j - 1])
                arr[j] = arr[j - 1];
            else
                break;
            j--;
        }
        arr[j] = temp;
        
        // /* Swap */
        // for(int j = i + 1; j > 0; j--){
        //     if(arr[j] < arr[j - 1])
        //         swap(arr[j], arr[j - 1]);
        //     else 
        //         break;
        // }
    }
}

int main(){
    vector<int> arr = {5, 2, 8, 3, 1, 6};
    insertionSort(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}