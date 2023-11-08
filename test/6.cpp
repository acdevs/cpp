#include <iostream>
using namespace std;
// Global variable
int globalVar = 10;
int main()
{
    // Local variable in the main function
    int localVar = 20;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable in main: " << localVar << endl;
    {
        int blockVar = 30;
        cout << "Block-level variable: " << blockVar << endl;
        cout << "Global variable inside block: " << ::globalVar << endl;
    }
    cout << "Global variable after the block: " << globalVar << endl;
    return 0;
}