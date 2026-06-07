#include<iostream>                     //Unit 2.1 - DSA                                                
using namespace std;
int main(){
    int n;
    cout<< "Total Elements: " << endl;
    cin>>  n;
       int a[n];
       cout<< "Enter elements: "<<  endl;
    for(int i=0; i<n;i++){
        cin>> a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]> a[j+1]){      //For Descending order: Change sign to "<"
                int temp = a[j];
                a[j] =  a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"Sorted Array: " <<endl; //In Ascending Order.
    for(int i=0;i<n;i++){
        cout<< a[i] << " ";
    }
    return 0;

//Note: If we take same values then they all will be printed untill we didn't give any update instructions.

}