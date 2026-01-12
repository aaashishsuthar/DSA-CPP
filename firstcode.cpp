#include<iostream>
using namespace std;
int main(){
    int a=2, b=5, c;
    cout<<"The value of a&b before swap: ";
         cin>> a,b;
    c=a;
    a=b;
    b=c;
    cout<<"\nThe value of a&b after swap: " <<a,b;

    

    return 0;
}