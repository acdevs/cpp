#include <iostream>
using namespace std;

class A{
    private:
        int x = 10;
    protected:
        int y = 8;
    public:
        int z  =10;
        void print(){
            cout << x << " " << y << " " << z << endl;
        }
};

// parent class must have a default constructor if in child class we are not calling any constructor
// or calling any but not specifiying the base class constructor if base class has no default constructor

class A2 : public A{
    private:
        int x;

    protected:

    public:
    A2(){
        x = 5;
        y += 6;
        z = 7;
    }
    void print(){
        cout << x << " " << y << " " << z << endl;
    }
};

int main(){
    A2 a2;
    a2.print();

    A a;
    cout << a.z << endl;
}