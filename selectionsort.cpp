#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n-1; i++){
        int min = i;   // assume current index is minimum

        for(int j = i+1; j < n; j++){
            if(a[j] < a[min]){   // compare with remaining elements
                min = j;         // update minimum index
            }
        }

        // swap AFTER inner loop ends
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}