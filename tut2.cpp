#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int i=3;
   long long b = 12345678912345LL;
   char ch = 'a';
   float f = 334.230f;
   double df = 14049.304930000;
  cout<< i <<endl;
   cout<< b <<endl;
    cout<< ch <<endl;
     cout<< fixed << setprecision(3) << f <<endl;
      cout<< fixed << setprecision(9) << df <<endl;
  
    
    return 0;
}