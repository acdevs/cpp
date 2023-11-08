#include <iostream>
using namespace std;

int main(){
    int amount;
    cout << "Enter amount: ";
    cin >> amount;
    int _100x = 0;
    int _50x = 0;
    int _20x = 0;
    int _10x = 0;

    switch (amount % 10)
    {
    case 0:
        _100x = amount / 100;
        amount %= 100;
        _50x = amount / 50;
        amount %= 50;
        _20x = amount / 20;
        amount %= 20;
        _10x = amount / 10;
        amount %= 10;
        break;
    case 5:
        _100x = amount / 100;
        amount %= 100;
        _50x = amount / 50;
        amount %= 50;
        _20x = amount / 20;
        amount %= 20;
        _10x = amount / 10;
        amount %= 10;
        break;
    default:
        cout << "Invalid amount";
        break;
    }

    cout << "100x: " << _100x << endl;
    cout << "50x: " << _50x << endl;
    cout << "20x: " << _20x << endl;
    cout << "10x: " << _10x << endl;
    cout << "Remaining: " << amount << endl;
    return 0;
}