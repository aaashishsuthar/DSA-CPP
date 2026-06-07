#include <iostream>
using namespace std; 

int main() 
{
    int size; 
    cout << "Enter the size of the array: ";
    cin >> size; 

    // Creating an array dynamically based on user input
    int *arr = new int[size]; 

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    cout << "The elements that you have entered are: ";
    for(int i = 0; i < size; i++) 
    {
        cout << arr[i] << ",";
    }

    // Deleting the dynamically allocated array
    delete[] arr; 

    return 0;
}