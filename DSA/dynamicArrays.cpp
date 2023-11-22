#include <iostream>
using namespace std;

int main(){
/* 
    // 1D dynamic array ----------------------------------------------
    int  *arr = new int[10];

    for(int i=0; i<10; i++){
        arr[i] = i+1;
    }

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }

    delete[] arr; 
*/

    // 2D dynamic array : n x m --------------------------------------

    int n = 5, m = 10;
    int **arr2d = new int*[n];
    for(int i = 0; i < n; i++){
        arr2d[i] = new int[m];
    }

    //release memory
    for(int i = 0; i < n; i++){
        delete[] arr2d[i];
    }
    delete[] arr2d;
/* 
    // 3D dynamic array
    int ***arr3d = new int**[5];
 */
    

    // jagged dynamic array ------------------------------------------
    int n = 5;
    int **jgg = new int*[n];
    for(int i = 0; i < n; i++){
        int m;
        cout << "Enter the size of row " << i << ": ";
        cin >> m;
        jgg[i] = new int[m];
    }

    //release memory
    for(int i = 0; i < n; i++){
        delete[] jgg[i];
    }
    delete[] jgg;
}