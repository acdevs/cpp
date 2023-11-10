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
    for (int i = 1; i <= n; i++)
    {
        if (isOdd(i))
            sum += i;
    }
    cout << "Sum of odd numbers till " << n << " is " << sum;
}
