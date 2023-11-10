#include <iostream>
#include <algorithm>
using namespace std;

class Date{
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(1997) {};

    void getDate(){
        cout << "Date : " << day << " / " << month << " / " << year << endl; 
    }

    void setDate(){
        int d, m, y;
        cout << "Set New Date -" << endl;
        cout << "Day: ";
        cin >> d;
        cout << "Month: ";
        cin >> m;
        cout << "Year: ";
        cin >> y;
        if(isValid(d, m, y)){
            this->day = d;
            this->month = m;
            this->year = y;
        }else{
            cout << "Invalid Date Provided!" << endl;
        }
    }

    void setDate(int d, int m, int y){
        if(isValid(d, m, y)){
            this->day = d;
            this->month = m;
            this->year = y;
        }else{
            cout << "Invalid Date Provided!" << endl;
        }
    }

private:
    bool isValid(int d, int m, int y){
        if(d <= 0 || m <= 0 || y <= 0){
            return false;
        }
        if(y > 9999) return false;
        if(m > 12) return false;
        if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31){
            return false;
        }
        if((m == 4 || m == 6 || m == 9 || m == 11) && day > 30){
            return false;
        }
        if(m == 2){
            if(y % 100 != 0 && y % 4 == 0 || y % 100 == 0 && y % 400 == 0){
                if(d > 29) return false;
            }
            else{
                if(d > 28) return false;
            }
        }
        return true;
    }

};

int main(){
    Date *date = new Date();
    // date->getDate();
    // date->setDate(20, 2, 1900);

    date->setDate();
    date->getDate();
}