#include <iostream> 
using namespace std;

int main() {
    // Using new operator to allocate memory for one integer dynamically
    int* num = new int; 
    
    // Assigning value to that memory
    *num = 25; 

    cout << "Number: " << *num << endl;
    cout << "Memory Address: " << num << endl;

    // Releasing the dynamically allocated memory
    delete num; 

    return 0;
}