#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    float grade;

    void display() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Aashish";
    s1.age = 20;
    s1.grade = 89.5;

    s1.display();

    return 0;
}
