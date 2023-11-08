#include <iostream>
using namespace std;

class A{
    private:
        int x = 0;
    protected:
        int y;
    public:
        int z;
        A(){
            x = 10;
            y = 60;
            z = 100;
        }
        void print(){
            cout << x << " " << y << " " << z << endl;
        }

};

// parent class must have a default constructor if in child class we are not calling any constructor
// or calling any but not specifiying the base class constructor if base class has no default constructor

class A2 : A{
    private:
        int x = 0;
    public:
    // A2(int n){
    //     y = 20;
    //     z = 30;
    // }
    void print(){
        cout << x << " " << y << " " << z << endl;
    }
};

int main(){
    A2 a2;
    a2.print();

    A a;
    a.print();
}