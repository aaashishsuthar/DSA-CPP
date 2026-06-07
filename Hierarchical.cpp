#include <iostream>
using namespace std;

class Employee {
public:
    void work() {
        cout << "Employee working" << endl;
    }
};

class Teacher : public Employee {
public:
    void teach() {
        cout << "Teaching students" << endl;
    }
};

class Engineer : public Employee {
public:
    void develop() {
        cout << "Developing software" << endl;
    }
};

int main() {
    Teacher t;
    Engineer e;

    t.work();
    t.teach();

    e.work();
    e.develop();
    return 0;
}