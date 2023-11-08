#include <iostream>
#include <string>
using namespace std;
class EMPLOYEE
{
private:
    int EmployeeNumber;
    string EmployeeName;
    double Basic;
    double DA;
    double IT;
    double NetSalary;

public:
    // Constructor to initialize the data members
    EMPLOYEE(int empNumber, string empName, double basic, double da, double it)
    {
        EmployeeNumber = empNumber;
        EmployeeName = empName;
        Basic = basic;
        DA = da;
        IT = it;
        calculateNetSalary();
    }
    // Function to calculate Net Salary
    void calculateNetSalary()
    {
        NetSalary = Basic + DA - IT;
    }
    // Function to print data members
    void printDataMembers()
    {
        cout << "Employee Number: " << EmployeeNumber << endl;
        cout << "Employee Name: " << EmployeeName << endl;
        cout << "Basic Salary: " << Basic << endl;
        cout << "DA: " << DA << endl;
        cout << "Income Tax: " << IT << endl;
        cout << "Net Salary: " << NetSalary << endl;
    }
};
int main()
{
    int empNumber;
    string empName;
    double basic, da, it;
    cout << "Enter Employee Number: ";
    cin >> empNumber;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, empName);
    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter DA: ";
    cin >> da;
    cout << "Enter Income Tax: ";
    cin >> it;
    // Creating an EMPLOYEE object with user inputs
    EMPLOYEE emp(empNumber, empName, basic, da, it);
    // Printing the data members
    cout << "\nEmployee Details:\n" << endl;
    emp.printDataMembers();
    return 0;
}