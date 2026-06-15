#include<iostream>
using namespace std;
int fact(int n){
int fact = 1;
for(int i=1; i<=n; i++){
    fact = fact*i;      
}
return fact;
}
int sum (int a, int b){
    int sum =0;
    sum = a+b;
      return sum;
}
int min(int a, int b){
    return (a<b)? a:b;
}
int main(){
    cout<< "Sum = " << sum(2,4) <<endl;
    cout<< "Minimum = " << min(2,4) <<endl;
    cout<<"Factorial = " << fact(9) <<endl;
    return 0;
}