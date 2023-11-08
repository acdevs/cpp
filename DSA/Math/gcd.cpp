#include <iostream>
using namespace std;

/* GCD */

int gcd_iter(int a, int b){
    if(a == 0) return b;

    if(b == 0) return a;

    while(a != b){
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    int a = 10, b = 20;
    cout << gcd(a, b) << endl;
    return 0;
}
