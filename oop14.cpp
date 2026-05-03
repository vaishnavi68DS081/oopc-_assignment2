//Student Record using Vector
#include <iostream>
#include <vector>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student(string n, int a) : name(n), age(a) {}
}; 
int main() {
    vector<Student> students;
    students.push_back(Student("Alice", 20));
    students.push_back(Student("Bob", 22));
    students.push_back(Student("Charlie", 19));

    cout << "Student Records:" << endl;
    for (const auto& student : students) {
        cout << "Name: " << student.name << ", Age: " << student.age << endl;
    }

    return 0;
}