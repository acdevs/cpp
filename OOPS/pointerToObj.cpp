#include <iostream>
using namespace std;

class person{
    protected:
    string name;
    public:
    void setName(string name){
        this->name = name;
    }
    void print(){
        cout << "Name: " << name << endl;
    }
    string getName(){
        return name;
    }
};

int main(){
    person* arr[100]; // array of pointers to person objects
}