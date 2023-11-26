#include <iostream>
#include <vector>
using namespace std;

int main(){
    /* ----------------------------DECLARATION---------------------------- */
    // vector<int> arr; // declare an array of size 5
    // vector<int> arr2 = {1, 2, 3, 4, 5}; // declare an array of size 5 and initialize it with 1, 2, 3, 4, 5

    vector<int> arr = {0, 2, 3, 5, 5};
    // vector<int> arr2(n, m); // declare an array of size n and initialize it with m
    // vector<int> arr2(arr); // declare an array of size n and initialize it with arr

    /* ----------------------------MODIFIERS---------------------------- */
    // arr.push_back(5); // add 5 to the end of the array
    // arr.pop_back(); // remove the last element of the array
    // arr.insert(arr.begin() + 1, 5); // insert 5 at index 1
    // arr.erase(arr.begin() + 1); // erase the element at index 1
    // arr.erase(arr.begin() + 1, arr.begin() + 3); // erase the elements from index 1 to index 3
    // arr.clear(); // remove all elements of the array
    // arr.resize(10); // resize the array to size 10
    // arr.resize(10, 5); // resize the array to size 10 and fill it with 5

    /* ----------------------------CAPACITY---------------------------- */
    // arr.size(); // return the size of the array
    // arr.empty(); // return true if the array is empty
    // arr.max_size(); // return the maximum size of the array
    // arr.capacity(); // return the capacity of the array
    // arr.shrink_to_fit(); // shrink the capacity of the array to fit its size

}