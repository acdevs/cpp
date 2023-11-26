// allocate memory using new

#include <iostream>
#include <vector>
using namespace std;

class Time{
    int h;
    int m;

    public:
        Time(){
            h = 0;
            m = 0;
        }

        Time(int h, int m){
            this->m = m % 60;
            this->h = h + (m / 60) % 24;
        }

        void whatsTime(){
            cout << "Time is " << h << " : " << m << endl;
        }
};

int main(){

    {
        Time *t1 = new Time;
        t1->whatsTime();
        cout << endl;

        delete t1;
    }


    vector <Time*> arr;
    for(int i = 0; i < 2; i++){
        int h, m;
        cout << "Time " << i + 1 << ": ";
        cin >> h >> m;
        arr.push_back(new Time(h, m));
    }

    cout << endl;
    for(auto i : arr){
        i->whatsTime();
    }

    /* deletion */
    for(int i = 0; i < 2; i++){
        delete arr[i];
    }
}
