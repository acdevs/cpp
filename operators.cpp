#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {};

    // Overloading the + operator
    Time operator+(const Time& other) const {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes + result.seconds / 60;
        result.hours = hours + other.hours + result.minutes / 60;
        result.seconds %= 60;
        result.minutes %= 60;
        return result;
    }

    // Overloading the << operator for output
    friend ostream& operator<<(ostream& os, const Time& t) {
        os << t.hours << "h " << t.minutes << "m " << t.seconds << "s";
        return os;
    }
};

int main() {
    Time t1(2, 30, 45);
    Time t2(1, 15, 20);

    Time sum = t1 + t2;
    cout << "Sum: " << sum << endl;

    string a = "Hello";
    string b = " World";
    cout << a + b << endl;

    return 0;
}