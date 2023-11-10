#include <iostream>
using namespace std;

int gcd(int a, int b){
    // method-1
    if(b == 0)
        return a;
    
    gcd(b, a % b);
}

int main(){
    int a = 359, b = 263;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
}