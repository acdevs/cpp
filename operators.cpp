#include <iostream>
using namespace std;

int main(){
    int x, y;
    y = 100;
    x = (y + 10, 99 + y);
    cout << "With brackets value of x :" << x << endl;
    x = y + 10, "kuch bhi likh do"; // returns after comma
    cout << "Without brackets value of x :" << x;
    x = y + (10, 99) + y;
    cout << "Without brackets value of x :" << x;
    return 0;
}