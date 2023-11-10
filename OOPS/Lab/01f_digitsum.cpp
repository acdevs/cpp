#include <iostream> 
using namespace std; 
int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    if (temp <= 0)
    {
        cout << "Please enter a positive value.";
        return -1;
    };
    do
    {
        int d = temp % 10;
        sum += d;
        temp /= 10;
    } while (temp);
    cout << "Sum of digits of " << n << " is " << sum;
}
