//Student Class
//Create a class with:
//name,roll number,marks. Display student details
#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
        string name;
        int rollNumber;
        float marks;
    public:
        Student(string n, int roll, float m)
        {
            name=n;
            rollNumber=roll;
            marks=m;
        }
        void displayDetails()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollNumber<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main()
{
    Student s("John", 123, 85.5);
    s.displayDetails();
    return 0;
}
