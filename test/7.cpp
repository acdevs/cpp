#include <iostream>
using namespace std;
int main()
{
    int *dynamicInt = new int;
    if (dynamicInt)
    {
        *dynamicInt = 42;
        cout << "Dynamically allocated integer: " << *dynamicInt << endl;
        delete dynamicInt;
    }
    else
    {
        cout << "Memory allocation failed." << endl;
    }
    return 0;
}