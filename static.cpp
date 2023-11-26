#include <iostream>
using namespace std;

/* Class variables and methods */

class Demo{
    public:
    // static const int x = 0; // if const is used, then it must be initialized
    // static int x = 0; // does not allow initialization;
    static int x;
    void fun(){
        // access only static variables
        cout << x << endl;
    }
};

int Demo::x = 0; // why it is required? outside the class, we need to define it !!!
// int Demo::x; // static vars are initialized to 0 by default
// but static function does not require this

int main(){
    Demo::x = 10;
    cout << Demo::x << endl;
    // Demo::fun();

    Demo d;
    d.fun();

}