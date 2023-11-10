#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
    int a;
    int b;
    int c;

public:
    Triangle() : a(0), b(0), c(0) {};

    void getSides(){
        cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    }

    void setSides(){
        int a, b, c;
        cout << "> New Side lengths -" << endl;
        cout << "Side-1 length: ";
        cin >> a;
        cout << "Side-2 length: ";
        cin >> b;
        cout << "Side-3 length: ";
        cin >> c;
        if(isValid(a, b, c)){
            this->a = a;
            this->b = b;
            this->c = c;
        }else{
            cout << "> Invalid Triangle!" << endl;
        }
    }

    void setSides(int a, int b, int c){
        if(isValid(a, b, c)){
            this->a = a;
            this->b = b;
            this->c = c;
        }else{
            cout << "> Invalid Triangle!" << endl;
        }
    }

    void checkType(){
        if(a == 0 && b == 0 && c == 0) return;
        if(a == b && b == c){
            cout << "> Equilateral Triangle!" << endl;
            return;
        }
        if(a == b || b == c || c == a){
            cout << "> Isosceles Triangle!" << endl;
            return;
        }
        cout << "> Scalene Triangle!" << endl;
    }

private:
    bool isValid(int a, int b, int c){
        if(a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= a + c || c >= a + b){
            return false;
        }
        return true;
    }
};

int main(){
    Triangle *tri = new Triangle();
    // tri->setSides(3, 4, 5);
    // tri->checkType();
    // cout << endl;
    tri->setSides();
    tri->checkType();
}