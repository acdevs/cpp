#include <iostream>
using namespace std;

int main()
{

int n;
cin >> n;

int i = 1;
while(i <= n){
    int s = n - i;
    while(s){
        cout << " ";
        s--;
    }
    int j = 1;
    while(j <= 2 * i - 1){
        cout << (j > i ? i - j % i : j);
        j++;
    }
    cout << endl;
    i++;
}

// int i = 1;
// while (i <= n){
//     int s = n - i;
//     while(s){
//         cout << " ";
//         s--;
//     }
//     int j = 1;
//     while(j <= i){
//         cout << "*";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// int i = 1;
// while(i <= n){
//     int j = 1;
//     while(j <= i){
//         char chr = 'A' + n - i + j - 1;
//         cout << chr;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// float a = 2/3.0;
// cout << a << endl;

// int a, b;
// a = cin.get();
// b = cin.get();
// cout << a << endl;

}