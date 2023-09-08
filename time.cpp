#include <iostream>
using namespace std;

class Time {
    int H;
    int M;
    public:
        Time(int h, int m) {
            H = h % 24;
            M = m % 60;
        }
        void display() {
            cout << H << ":" << M << endl;
        }
        Time add(Time t) {
            Time temp(0, 0);
            temp.M = (M + t.M) % 60;
            int carry = (M + t.M) / 60;
            temp.H = (H + t.H + carry) % 24;
            return temp;
        }
};

int main() {
    Time t1 = Time(11, 30);
    Time t2 = Time(10, 30);
    Time t3 = t1.add(t2);
    t1.display();
    t2.display();
    cout << "Total Time: ";
    t3.display();
    return 0;
}