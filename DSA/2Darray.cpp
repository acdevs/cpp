#include <iostream>
using namespace std;

int main() {
    // Declaring a 2D array of size 3x4
    int arr[3][4];

    // Initializing the 2D array using nested loops
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            arr[i][j] = i+j;
        }
    }

    // Printing the 2D array using nested loops
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<4; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Declaring and initializing a 2D array using an initializer list
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Printing the 2D array using range-based for loop
    for(auto &row : arr2) {
        for(auto &elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Performing operations on 2D array
    arr[1][2] = arr[0][1] + arr2[1][0];
    cout << "arr[1][2] = " << arr[1][2] << endl;

    return 0;
}
