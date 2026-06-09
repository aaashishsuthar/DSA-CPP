#include<iostream>
using namespace std;
//Function Definition
int sum(int a, int b){
    int sum = (a+b);
    return sum;
}
int min(int a , int b){  // inta and int b -> parameters
    return (a<b)? a:b;
}
int main(){
    //Function Calling
    int x,y;
    cout<<"ENter x: "<<endl;
  cin>>x;
    cout<<"Enter y: " <<endl;
    cin>>y;

    cout<<"minimum: "<< min(x,y)<<endl; //x and y -> arguments
    cout<<"sum: " << sum(x,y)<<endl;
    return 0;
}