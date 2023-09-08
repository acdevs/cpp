// Creator: Taylor Brockhoeft
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    Student(string name, int id) : name(name), id(id) {}
    virtual void print() const = 0;
    virtual ~Student() {}
    virtual bool lessThan(const Student& s) const = 0;
    string getName() const { return name; }
    int getId() const { return id; }
private:
    string name;
    int id;
};

class Undergrad : public Student {
public:
    Undergrad(string name, int id, int year) : Student(name, id), year(year) {}
    void print() const { cout << "Undergrad: " << getName() << " " << getId() << " " << year << endl; }
    bool lessThan(const Student& s) const { return getId() < s.getId(); }
private:
    int year;
};

class Grad : public Student {
public:
    Grad(string name, int id, string advisor) : Student(name, id), advisor(advisor) {}
    void print() const { cout << "Grad: " << getName() << " " << getId() << " " << advisor << endl; }
    bool lessThan(const Student& s) const { return getName() < s.getName(); }
private:
    string advisor;
};

void printStudents(const vector<Student*>& students) {
    for (int i = 0; i < students.size(); i++) {
        students[i]->print();
    }
}

bool compareStudents(const Student* s1, const Student* s2) {
    return s1->lessThan(*s2);
}

int main() {
    vector<Student*> students;
    students.push_back(new Undergrad("Joe", 1234, 3));
    students.push_back(new Grad("Sue", 5678, "Dr. Smith"));
    students.push_back(new Undergrad("Al", 9012, 2));
    students.push_back(new Grad("Mary", 3456, "Dr. Jones"));
    printStudents(students);
    sort(students.begin(), students.end(), compareStudents);
    printStudents(students);
    for (int i = 0; i < students.size(); i++) {
        delete students[i];
    }
    return 0;
}