#include <iostream>
using namespace std;
class Base
{
public:
    virtual void s() = 0; // Pure Virtual Function
};
class Derived : virtual public Base
{
public:
    void s()
    {
        cout << "Virtual Function in Derived_class";
    }
};

int main()
{
    Base *b;
    Derived d_obj;
    b = &d_obj;
    b->s();
}