#include <iostream>
using namespace std;

class sample{
    int a;
    int b;
    friend float mean(sample s);

    public:
    void setvalue(){
        a = 25;
        b = 40;
    }
};

float mean(sample s){
    return float(s.a + s.b) / 2;
}

int main(){
    sample x;
    x.setvalue();
    cout << mean(x) << endl;
}