#include <iostream> 
using namespace std; 

inline int sum(int a, int b){ return a+b; }
inline int subtract(int a, int b){ return a - b; }
inline int multiply(int a, int b){ return a*b; }
inline int divide(int a, int b){     
    if(b == 0) {         
        cout << "Divisor can't be ";         
        return 0;
    }     
    return a / b;
} 
inline int pow(int a, int b){     
    int pow;     
    for( int i=0; i<=b; i++ ) pow *= a;
    return pow;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "What do you want to do?\n";
    cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Power(a^b)\n";
    int opt;
    cin >> opt;
    switch (opt)
    {
    case 1:
        cout << sum(a, b);
        break;
    case 2:
        cout << subtract(a, b);
        break;
    case 3:
        cout << multiply(a, b);
        break;
    case 4:
        cout << divide(a, b);
        break;
    case 5:
        cout << pow(a, b);
        break;
    default:
        break;
    }
    return 0;
}
