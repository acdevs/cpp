#include<iostream>
#include <iomanip>
using namespace std;

int main(){

/* Using ios set flags and predefined functions */

    // char c = 'A'; 
       
    // // Adjusting width will be 5. 
    // // cout.width(5); 
    // // cout<< c <<endl;
    // // cout<< c <<endl; // this will not be affected by width


    // cout.setf(ios::fixed, ios::floatfield); 
    // cout.precision(2); 
    // cout << 3.1422 << endl;


    // cout.fill('*'); 
    // cout.width(10); 
    // cout << c << "\n"; 

    // cout.setf(ios::left, ios::adjustfield);
    // cout.width(10);
    // cout << c << "\n";

    // cout.setf(ios::right, ios::adjustfield);

    // cout.setf(ios::showpos);
    // cout<< 10 <<endl;

    // cout.setf(ios::showpoint);
    // cout<< 10.0 <<endl;

    // cout.setf(ios::uppercase);
    // cout<< "hello" <<endl;

    // cout.setf(ios::oct, ios::basefield);
    // cout<< 10 <<endl;

    // cout.setf(ios::hex, ios::basefield);
    // cout<< 10 <<endl;

    // cout.setf(ios::dec, ios::basefield);
    // cout<< 10 <<endl;

    // //unset flags
    // cout.unsetf(ios::showpos);
    // cout.unsetf(ios::showpoint);
    // cout.unsetf(ios::uppercase);
    // cout.unsetf(ios::showbase);





/* Using manipulators */

    // cout<< hex << 10 <<endl;
    // cout<< dec << 10 <<endl;
    // cout<< oct << 10 <<endl;

    // cout<< showbase << hex << 10 <<endl;
    // cout<< showbase << oct << 10 <<endl;

    // cout<< uppercase << hex << 10 <<endl;

    // cout<< showpos << dec << 10 <<endl;
    // cout<< showpoint << 10.0 <<endl;

    cout<< setw(10) << setfill('*') << 'A' <<endl;
    cout<< setw(10) << setfill('*') << left << 'A' <<endl;

    cout<< setw(10) << setfill('*') << right << 'A' <<endl;

    cout<< setw(10) << setfill('*') << internal << 'A' <<endl;

    cout<< setw(10) << setfill('*') << setprecision(3) << 3.1422 <<endl;

    return 0;
}