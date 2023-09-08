#include <iostream>
using namespace std;

class Employee{
    protected:
        int ssn;
        string name;
        int age;
        double salary;
        string address;

    public:
        Employee(int s, string n, int a, double sal, string add){
            ssn = s;
            name = n;
            age = a;
            salary = sal;
            address = add;
        }
        void printSalary(){
            cout << "Salary: " << salary << endl;
        }
        void printCheck(){
            cout << "SSN: " << ssn << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
        void printEmployee(){
            cout << "SSN: " << ssn << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Salary: " << salary << endl;
            cout << "Address: " << address << endl;
        }
};

class Manager : public Employee{
    private:
        string department;
        int numEmployees;
    public:
        Manager(int s, string n, int a, double sal, string add, string dep, int num) : Employee(s, n, a, sal, add){
            department = dep;
            numEmployees = num;
        }
        void raiseSalary(double percent){
            salary += salary * percent;
        }
};

class Programmer : public Employee{
    private:
        string language;
        string level;
    public:
        Programmer(int s, string n, int a, double sal, string add, string lang, string lev) : Employee(s, n, a, sal, add){
            language = lang;
            level = lev;
        }
        void printSkill(){
            cout << level << " " << language << " developer." << endl;
        }
};

int main(){
    Manager m1(22124009, "Aman Chandra", 20, 60000, "456 Down St.", "Sales", 10);
    m1.raiseSalary(0.1);
    m1.printEmployee();
    cout << endl;

    Programmer p1(22124069, "Addams William", 25, 50000, "123 Main St.", "C++", "Senior");
    p1.printEmployee();
    p1.printSkill();
    cout << endl;

    return 0;
}