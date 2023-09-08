#include <iostream> 
#include<math.h> 
using namespace std; 
int main(){     
    int num;
    cout<<"Enter a number : ";
    cin >> num;
    int temp = num;
    int sum = 0;
    while (temp > 0)
    {
        int d = temp % 10;
        int d_cube = d * d * d;
        sum += d_cube;
        temp /= 10;
    }
    if (sum == num)
        cout << num << " is an armstrong number\n";
    else
        cout << num << " is not an armstrong number\n";
    return 0;
}