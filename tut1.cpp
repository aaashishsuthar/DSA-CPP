#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>> age;
    if(age<18){
        cout<<"You are under age.";
    }
    else if(age==18){
        cout<<"You have to get a pass.";
    }
    else{
        cout<<"You are Welcome!";
    }
return 0;
}