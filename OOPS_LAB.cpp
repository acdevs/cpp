#include <iostream>
using namespace std;

class Count{
    int value;

    public:
    Count(){
        this->value = 0;
    }

    // pre-increment overload
    Count operator ++ (){
        Count newCount;
        this->value += 1;
        newCount.value = this->value;
        return newCount;
    }

    // post-increment overload
    Count operator ++ (int){
        Count newCount;
        newCount.value = this->value;
        this->value += 1;
        return newCount;
    }

    int getValue(){
        return this->value;
    }
};

int main(){
    Count count;
    cout << count.getValue() << endl;

    ++count;
    cout << count.getValue() << endl;

    ++count;
    cout << count.getValue() << endl;

    Count count2 = count++;
    cout << count2.getValue() << endl;

    Count count3 = ++count;
    cout << count3.getValue() << endl;

    count++;
    cout << count.getValue() << endl;
}