#include<iostream> 
using namespace std;

class copyconstructor
{
private:
    int aashish, class_;   
    
public:
    copyconstructor(int aashish1, int class1)
    {
        aashish = aashish1;
        class_ = class1;
    }
    
    copyconstructor(copyconstructor &sam)
    {
        aashish = sam.aashish;
        class_ = sam.class_;
    }
    
    void display()
    {
        cout << aashish << " " << class_ << endl;
    }
};

int main()
{
    copyconstructor obj1(10, 15);    
    copyconstructor obj2 = obj1;     

    cout << "Normal constructor : ";
    obj1.display();

    cout << "Copy constructor : ";
    obj2.display();

    return 0;
}
