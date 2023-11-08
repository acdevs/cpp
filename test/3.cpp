#include <iostream>
using namespace std;
class student
{
    string name;
    int roll_no;
    char grade;

public:
    void setStudent()
    {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll no.: ";
        cin >> roll_no;
        cout << "Enter grade: ";
        cin >> grade;
    }
    void getStudent()
    {
        cout << "\nStudent Details:" << "\n";
        cout << "Name of student is: " << name << "\n";
        cout << "Roll no is: " << roll_no << "\n";
        cout << "Grade: " << grade << "\n";
    }
};
int main()
{
    student s1;
    student *p = &s1;
    p->setStudent();
    p->getStudent();
    return 0;
}