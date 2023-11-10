#include <iostream>
using namespace std;

class ClassA; // Forward declaration of ClassA

class ClassB {
private:
    int privateDataB;

public:
    ClassB(int dataB) : privateDataB(dataB) {}

    void Function(ClassA& objA); // don't add body here if you want to make it a friend function !!!
};

class ClassA {
private:
    int privateDataA;

public:
    ClassA(int dataA) : privateDataA(dataA) {}

    friend void ClassB::Function(ClassA& objA);  // Declaring ClassB::FriendFunction as a friend function
};

void ClassB::Function(ClassA& objA) {
    cout << "ClassA::privateDataA = " << objA.privateDataA << endl;
    cout << "ClassB::privateDataB = " << privateDataB << endl;
}


int main() {
    ClassA objA(42);
    ClassB objB(17);

    objB.Function(objA); // Call the friend function from ClassB

    return 0;
}