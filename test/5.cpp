#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Employee
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
    Employee(int empNumber, string empName, double basic)
    {
        EmployeeNumber = empNumber;
        EmployeeName = empName;
        Basic = basic;
        DA = 0.52 * Basic; // DA is 52% of Basic
        calculateNetSalary();
    }
    void calculateNetSalary()
    {
        IT = 0.3 * (Basic + DA); // IT is 30% of Gross Salary
        NetSalary = Basic + DA - IT;
    }
    void printDataMembers() const
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
    int N;
    cout << "Enter the number of employees: ";
    cin >> N;
    vector<Employee> employees;
    for (int i = 0; i < N; i++)
    {
        int empNumber;
        string empName;
        double basic;
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "Employee Number: ";
        cin >> empNumber;
        cin.ignore(); // Clear the input buffer
        cout << "Employee Name: ";
        getline(cin, empName);
        cout << "Basic Salary: ";
        cin >> basic;
        Employee emp(empNumber, empName, basic);
        employees.push_back(emp);
    }
    for (const Employee &emp : employees)
    {
        emp.printDataMembers();
        cout << "----------------------------------------" << endl;
    }
    return 0;
}