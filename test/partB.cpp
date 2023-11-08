#include <iostream>
#include <string>
using namespace std;

// Class to represent a student record
class Student
{
private:
    int rollNumber;
    string name;
    int age;

public:
    // Default constructor
    Student() : rollNumber(0), name(""), age(0) {}
    // Parameterized constructor
    Student(int roll, const string &studentName, int studentAge) : rollNumber(roll),
                                                                   name(studentName), 
                                                                   age(studentAge) {}
    // Function to display the student's information
    void displayInfo() const
    {
        cout << "Roll Number: " << rollNumber << " | Name: " << name << " | Age: " << age << endl;
    }
};
// Class to manage the student records
class StudentDatabase
{
private:
    Student *studentRecords;
    int capacity;
    int numRecords;

public:
    // Constructor to initialize the database with a specific capacity
    StudentDatabase(int maxCapacity) : capacity(maxCapacity), numRecords(0)
    {
        studentRecords = new Student[capacity];
    }
    // Destructor to release memory
    ~StudentDatabase()
    {
        delete[] studentRecords;
    }
    // Function to add a new student record
    void addStudentRecord(int roll, const string &name, int age)
    {
        if (numRecords < capacity)
        {
            studentRecords[numRecords] = Student(roll, name, age);
            cout << "Student record added successfully." << endl;
            numRecords++;
        }
        else
        {
            cout << "Maximum number of records reached." << endl;
        }
    }
    // Function to view all student records
    void viewStudentRecords() const
    {
        if (numRecords == 0)
        {
            cout << "No records found." << endl;
            return;
        }
        cout << "Student Records:" << endl;
        for (int i = 0; i < numRecords; i++)
        {
            studentRecords[i].displayInfo();
        }
    }
};
int main()
{
    cout << "___Student Record System___" << endl << endl;
    int maxRecords;
    cout << "Enter the maximum number of records: ";
    cin >> maxRecords;
    StudentDatabase database(maxRecords);
    char choice;
    do{
        cout << "1. Add Student Record" << endl;
        cout << "2. View Student Records" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
        case '1':
        {
            int roll;
            string name;
            int age;
            cout << "\nEnter Roll Number: ";
            cin >> roll;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Age: ";
            cin >> age;
            database.addStudentRecord(roll, name, age);
            break;
        }
        case '2':
            database.viewStudentRecords();
            break;
        case '3':
            cout << "\nExiting the program." << endl;
            break;
        default:
            cout << "\nInvalid choice. Please try again." << endl;
        }
    } while (choice != '3');

    return 0;
}
