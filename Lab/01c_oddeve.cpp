#include <iostream> 
using namespace std; 
int main(){     
    cout<<"Enter a number : ";
    int n;
    cin >> n;
    if (n & 1 == 1)
        cout << n << " is odd number.\n";
    else
        cout << n << " is even number.\n";
    return 0;
}
