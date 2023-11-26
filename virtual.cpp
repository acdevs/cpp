#include<iostream>
using namespace std;

class A{
    public:
        int x;
        A(){
            x = 10;
        }
        /* Normal virtual f */
        void print(){
            cout << x << endl;
        }

        /* Pure virtual f */
        // virtual void print() = 0;
};

class B : public A{
    public:
        B(){
            x = 20;
        }
        void print(){
            cout << " " << x << endl;
        }
};

int main(){
    A *a;
    B b;
    a = &b;
    a->print(); // 20
    /* if virtual wasn't there then, it would have printed 10 */
    b.print();
}