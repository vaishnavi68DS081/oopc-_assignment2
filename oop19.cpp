// multi-level inheritance
//Person → Student → Exam
#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;        
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
public:    int rollNumber;        
    Student(string n, int a, int roll) : Person(n, a), rollNumber(roll) {}
    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class Exam : public Student {
public:    float marks;        
    Exam(string n, int a, int roll, float m) : Student(n, a, roll), marks(m) {}
    void displayExam() {
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Exam exam("Alice", 20, 123, 85.5);
    exam.displayExam();         
    return 0;
}