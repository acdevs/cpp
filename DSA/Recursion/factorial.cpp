#include <iostream>
#include <vector>
using namespace std;

int nthFactorial(int n){
    if(n <= 0)
        return 0;
    if(n == 1)
        return 1;

    return nthFactorial(n - 1) + nthFactorial(n - 2);
}

int main(){
    int n = 40;
    for(int i = 0; i < n; i++)
        cout << nthFactorial(i) << ", ";
    cout << endl;
}