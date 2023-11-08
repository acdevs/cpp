#include <iostream>
#include<array>
using namespace std;

int main(){
    /* ----------------------------DECLARATION---------------------------- */
    // array<int, 5> arr; // declare an array of size 5
    // array<int, 5> arr2 = {1, 2, 3, 4, 5}; // declare an array of size 5 and initialize it with 1, 2, 3, 4, 5

    array<int, 5> arr = {0, 2, 3, 5, 5};

    /* ----------------------------ACCESS---------------------------- */
    // arr[0] = 1; // change the value at index 0 to 1
    // arr.at(0) = 1; // change the value at index 0 to 1
    // arr.front() = 1; // change the value at index 0 to 1
    // arr.back() = 1; // change the value at index 0 to 1
    // arr.data()[0] = 1; // change the value at index 0 to 1
    
    /* ----------------------------MODIFIERS---------------------------- */
    // arr.fill(0); // fill the array with 0
    // arr.swap(arr2); // swap the values of arr and arr2

    /* ----------------------------CAPACITY---------------------------- */
    // arr.size(); // return the size of the array
    // arr.empty(); // return true if the array is empty
    // arr.max_size(); // return the maximum size of the array

    /* ----------------------------REFERENCES---------------------------- */

    // sort(arr.begin(), arr.end()); // sort the array
    // reverse(arr.begin(), arr.end()); // reverse the array
    // min_element(arr.begin(), arr.end()); // return the minimum element of the array
    // max_element(arr.begin(), arr.end()); // return the maximum element of the array
    // accumulate(arr.begin(), arr.end(), 0); // return the sum of all elements of the array
    // count(arr.begin(), arr.end(), 5); // return the number of times 5 appears in the array
    // find(arr.begin(), arr.end(), 5); // return the index of the first occurence of 5 in the array
    // find(arr.begin(), arr.end(), 5) != arr.end(); // return true if 5 is in the array
    // binary_search(arr.begin(), arr.end(), 5); // return true if 5 is in the array
    // lower_bound(arr.begin(), arr.end(), 5); // return the index of the first element >= 5
    // upper_bound(arr.begin(), arr.end(), 5); // return the index of the first element > 5
    // equal(arr.begin(), arr.end(), arr2.begin()); // return true if arr and arr2 are equal
    // mismatch(arr.begin(), arr.end(), arr2.begin()); // return the first mismatched element in arr and arr2
    // copy(arr.begin(), arr.end(), arr2.begin()); // copy arr to arr2
    // copy_backward(arr.begin(), arr.end(), arr2.end()); // copy arr to arr2 in reverse order
    // move(arr.begin(), arr.end(), arr2.begin()); // move arr to arr2
    // move_backward(arr.begin(), arr.end(), arr2.end()); // move arr to arr2 in reverse order

    // fill(arr.begin(), arr.end(), 5); // fill the array with 5
    // fill_n(arr.begin(), 5, 5); // fill the first 5 elements of the array with 5

    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), plus<int>()); // add arr and arr2 and store the result in arr3
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), minus<int>()); // subtract arr2 from arr and store the result in arr3
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), multiplies<int>()); // multiply arr and arr2 and store the result in arr3
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), divides<int>()); // divide arr by arr2 and store the result in arr3
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), modulus<int>()); // find the remainder of arr divided by arr2 and store the result in arr3
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), negate<int>()); // negate arr and store the result in arr3
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), greater<int>()); // return true if arr > arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), less<int>()); // return true if arr < arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), greater_equal<int>()); // return true if arr >= arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), less_equal<int>()); // return true if arr <= arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), equal_to<int>()); // return true if arr == arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), not_equal_to<int>()); // return true if arr != arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), logical_and<int>()); // return true if arr && arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), logical_or<int>()); // return true if arr || arr2
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), logical_not<int>()); // return true if !arr
    // transform(arr.begin(), arr.end(), arr2.begin(), arr3.begin(), bit_and<int>()); // return true if arr & arr2

}