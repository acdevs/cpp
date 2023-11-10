#include <iostream>
using namespace std;

class Star{
    int x;
    int z;

    public:
    int y;
    Star(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Star(const Star &s){
        this->x = s.x;
        this->y = s.y;
        this->z = s.z;
    }

    void operator=(const Star &s){
        this->x = s.x;
        this->y = s.y;
        this->z = s.z;
    }

    void print(){
        cout << x << " " << y << " " << z << endl;
    }

    ~Star(){
        cout << "Destructor called" << endl;
    }

    // void doNothing(const Star &s){
    //     s.print();
    // }
};


void doNothing(Star &s){
    Star star(6, 2, 3);
    s = star;
    s.y = 0;
    s.print();
}


int main(){
    // Star *star = new Star(1, 2, 3);
    Star star(1, 2, 3);
    doNothing(star);
    star.print();
}