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

class Developer : public Employee{
    protected:
        string level;
        string language;
    public:
        Developer(int s, string n, int a, double sal, string add, string lang, string lev) : Employee(s, n, a, sal, add){
            level = lev;
            language = lang;
        }
};

class CloudDev : public Developer{
    private:
        string cloud;
    public:
        CloudDev(int s, string n, int a, double sal, string add, string lang, string lev, string c) : Developer(s, n, a, sal, add, lang, lev){
            cloud = c;
        }
        void printSkill(){
            cout << level << " developer on " << cloud << " cloud." << endl;
        }
};

class WebDev : public Developer{
    private:
        string stack;
    public:
        WebDev(int s, string n, int a, double sal, string add, string lang, string lev, string stk) : Developer(s, n, a, sal, add, lang, lev){
            stack = stk;
        }
        void printSkill(){
            cout << level << " developer on " << stack << " stack." << endl;
        }
};

int main(){
    Manager m1(22124009, "Aman Chandra", 20, 120000, "456 Down St.", "Sales", 10);
    m1.raiseSalary(0.1);
    m1.printEmployee();
    cout << endl;

    CloudDev c1(22124009, "Aman Chandra", 20, 80000, "456 Down St.", "Python", "Senior", "AWS");
    c1.printSkill();
    c1.printEmployee();
    cout << endl;

    WebDev w1(22124009, "Aman Chandra", 20, 40000, "456 Down St.", "JavaScript", "Senior", "MERN");
    w1.printSkill();
    w1.printEmployee();
    cout << endl;
    return 0;
}