#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;

class Student{
private:
    string name;
    string rollno;
    double cgpa;

public:
    void setData(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollno;
            cout << "Enter CGPA: ";
            cin >> cgpa;
    }
    void getData(){
        cout << "Name: " << name << "\n";
        cout << "Roll Number: " << rollno << "\n";
        cout << "CGPA: " << fixed << setprecision(2) << cgpa << "\n";
    }
};

int main(){
    Student student1, student2;
    cout << "Student 1:\n";
    student1.setData();
    cout << "Student 2:\n";
    student2.setData();
    cout << endl;
    
    // display info
    cout << "Student 1:\n";
    student1.getData();
    cout << endl;
    cout << "Student 2:\n";
    student2.getData();
    return 0;
}
