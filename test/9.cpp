#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};
class GermanShepherd : public Dog
{
public:
    void displayInfo()
    {
        cout << "This is a German Shepherd." << endl;
    }
};
int main()
{
    GermanShepherd gs;
    gs.eat();
    gs.bark();
    gs.displayInfo();
    return 0;
}