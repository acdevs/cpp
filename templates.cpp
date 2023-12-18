#include<iostream>
using namespace std;

// template<class T>
// template<class U, class V>
// template<class A = int, class B = char>
// template <class T, int max>


template <class T> void fun(const T& x) 
{ 
  static int i = 10; 
  cout << i++; 
  return; 
} 

template <class S> class MyClass {
public:
    static T publicStaticVar;  // Public static variable

private:
    static T privateStaticVar; // Private static variable
};

// Definition of the static variables outside the class
int MyClass<int>::publicStaticVar = 0;
int MyClass<int>::privateStaticVar = 0;

int main(){
    cout<<"Hello World";
    cout << endl;
    fun<int>(1);
    cout << endl;
    fun<int>(2);
    cout << endl;
    fun<double>(1.1);
    cout << endl;
    fun<double>(1.1);
    cout << endl;

    // cout << MyClass<int>::privateStaticVar << endl; // Error: private static variable
//     cout << MyClass<int>::publicStaticVar  << endl;
//     return 0;
}