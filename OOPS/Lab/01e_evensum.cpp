#include <iostream> 
using namespace std; 
bool isOdd(int x){ return x & 1 == 1 ? 1 : 0; };
int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Please enter a positive number";
        return -1;
    }
    int sum = 0;
    int i = 1;
    while( i <= n)
    {
        if (!isOdd(i)) sum += i;
        i++;
    }
    cout << "Sum of even numbers till " << n << " is " << sum;
}
