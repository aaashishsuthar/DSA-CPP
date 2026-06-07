#include<iostream>
using namespace std;
class Class509B {
public:
    Class509B() {
        cout << "509B is a Parent class." << endl;
    }
};


class PP : public Class509B {
    

};


class Maths : public Class509B {

};


class DE : public Class509B {

};

int main() {
    PP obj1;
    Maths obj2;
    DE obj3;
    return 0;
}