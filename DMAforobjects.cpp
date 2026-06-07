#include <iostream>
using namespace std;

class Car {
public:
    string name;
    void display() {
        cout << "Car Name: " << name << endl;
    }
};

int main() {
    // Creating an object dynamically
    Car *c = new Car;

    // Accessing object members using the arrow operator (->)
    c->name = "BMW";
    c->display();

    // Deleting the dynamically created object
    delete c;

    return 0;
}