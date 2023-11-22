#include <iostream>
using namespace std;

void person(string name){
    cout << "Hi! I'm " << name << ". " << endl;
}
void person(string name, int age){
    cout << "Hi! I'm " << name << " and I'm " << age << " years old." << endl;
}
void person(string name, int age, string interest){
    cout << "Hi! I'm " << name << " and I'm " << age << " years old. I like " << interest << "." << endl;
}

int main(){
    person("John");
    person("John", 20);
    person("John", 20, "programming");
    return 0;
}