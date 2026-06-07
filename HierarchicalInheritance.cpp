#include<iostream>
using namespace std;

class Class509B {
public:
    Class509B() {
        cout << "509B is a Parent class." << endl;
    }
};


class PP : public Class509B {
public:
    PP() {
        cout << "PP is a child of 509B." << endl;
    }
};

class Maths : public Class509B {
public:
    Maths() {
        cout << "Maths is a child of 509B." << endl;
    }
};

class DE : public Class509B {
public:
    DE() {
        cout << "DE is a child of 509B." << endl;
    }
};


class Practical : public PP {
public:
    Practical() {
        cout << "Practical is child of PP." << endl;
    }
};

class Theory : public PP {
public:
    Theory() {
        cout << "Theory is child of PP." << endl;
    }
};


class Tut : public Maths {
public:
    Tut() {
        cout << "Tut is child of Maths." << endl;
    }
};

class Lect : public Maths {
public:
    Lect() {
        cout << "Lect is child of Maths." << endl;
    }
};


class DEPract : public DE {
public:
    DEPract() {
        cout << "DEPract is child of DE." << endl;
    }
};

class DETheory : public DE {
public:
    DETheory() {
        cout << "DETheory is child of DE." << endl;
    }
};

int main() {

    Practical obj1;
    cout <<  endl;

    Tut obj2;
    cout <<   endl;

    DETheory obj3;

    return 0;
}