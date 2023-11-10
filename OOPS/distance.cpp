#include <iostream>
using namespace std;

class Distance{
    int feet;
    int inches;
    public:
        Distance(int f, int i){
            inches = i % 12;
            feet = f + i / 12;
        }

        void display(){
            cout << feet << "` " << inches << "``"  << endl;
        }

        Distance add(Distance distance){
            Distance temp(0, 0);
            temp.inches = (inches + distance.inches) % 12;
            int carry = (inches + distance.inches) / 12;
            temp.feet = feet + distance.feet + carry;
            return temp;
        }
};

int main(){
    Distance d1 = Distance(10, 20);
    Distance d2 = Distance(20, 30);
    Distance d3 = d1.add(d2);
    d1.display();
    d2.display();
    cout << "Total Distance: ";
    d3.display();
    return 0;
}