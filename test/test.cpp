#include <iostream>
template <typename T>
class MyContainer
{
public:
    MyContainer(T value) : data(value) {}
    T getValue() { return data; }

private:
    T data;
};

int main(){
    MyContainer<int> intContainer(42);         // Creating an instance for integers.
    MyContainer<double> doubleContainer(3.14); // Creating an instance for doubles.
    std::cout << "Integer Container Value: " << intContainer.getValue() << std::endl;
    std::cout << "Double Container Value: " << doubleContainer.getValue() << std::endl;
    return 0;
}