#include <iostream>
using namespace std;
class Animals
{
public:
void sound()
{
cout << "Genric animal sound" << endl;
}
};
class Cats: public Animals
{
public:
void sound()
{
cout << "Cat meow" << endl;
}
};
int main()
{
Animals *a;
Cats c;
a= &c;
a -> sound(); // early binding
return 0;
}
