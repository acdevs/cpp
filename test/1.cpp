#include <iostream>
using namespace std;

class student{
    string name;
    char grade;
    int roll_no;

public:
    void getStudent(){
        cout << "Enter student name:";
        cin.ignore();
        getline(cin, name);
        cout << "Enter student grade:";
        cin >> grade;
        cout << "Enter student roll no:";
        cin >> roll_no;
        cout << endl;
    }
    void showStudent()
    {
        cout << "Student name is:" << name << "\n";
        cout << "Student roll no. is:" << roll_no << "\n";
        cout << "Student grade is:" << grade << "\n";
    }
};

int main()
{
    student stud[3];
    for (int i = 0; i < 3; i++){
        cout << "For student " << (i + 1) << "\n";
        stud[i].getStudent();
    }
    for (int i = 0; i < 3; i++){
        cout << "For student " << (i + 1) << "\n";
        stud[i].showStudent();
    }
    return 0;
}
