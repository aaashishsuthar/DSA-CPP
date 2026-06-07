#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a person" << endl;
    }
};

class Employee : public Person {
};

class Leader {
public:
    void lead() {
        cout << "Leading the team" << endl;
    }
};

class Manager : public Employee, public Leader {
};

int main() {
    Manager m;
    m.display();
    m.lead();
    return 0;
}