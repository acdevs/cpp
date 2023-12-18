#include <iostream>
using namespace std;

class A{
public:
    int x = 10;
    void print(){
        cout << x << endl;
    }
    void person(string name){
        cout << "Hi! I'm " << name << ". " << endl;
    }
    void person(string name, int age){
        cout << "Hi! I'm " << name << " and I'm " << age << " years old." << endl;
    }
    void person(string name, float age, string interest){
        cout << "Hi! I'm " << name << " and I'm " << age << " years old. I like " << interest << "." << endl;
    }
};



int main(){
    A a;
    a.person("John");
    a.person("John", 20);
    a.person("John", 20, "programming");
    return 0;
}