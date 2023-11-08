#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int rollNumber;
    Student(string n, int r) : name(n), rollNumber(r) {}
    void displayInfo()
    {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};
int main()
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    Student **students = new Student *[numStudents]; // array of pointers to Student objects
    for (int i = 0; i < numStudents; ++i)
    {
        string name;
        int rollNumber;
        cout << "Enter name for student: " << i + 1 << ": ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number for student: " << i + 1 << ": ";
        cin >> rollNumber;
        students[i] = new Student(name, rollNumber);
    }
    cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; ++i)
    {
        students[i]->displayInfo();
    }
    for (int i = 0; i < numStudents; ++i)
    {
        delete students[i];
    }
    delete[] students;
    return 0;
}