#include<iostream>
using namespace std;

class Camera{
    int pixels;
    int zoom;

public:
    void CameraFunctions(int p, int z) {
        pixels = p;
        zoom = z;
    }

    void displayCameraFunctions() {
        cout << "Pixels: " << pixels << endl;
        cout << "Zoom: " << zoom << endl;
    }
}; 


class Phone{
    int ram;
    int storage;

public:
    void PhoneFunctions(int r,int s){
        ram = r;
        storage = s;
    }

    void displayPhoneFunctions(){
        cout<< "Ram: "<< ram<< endl;
        cout<< "Storage: " << storage << endl;
    }
};  


class SmartPhone: public Camera, public Phone{
public:   
    void displaysmartphone(){
        displayCameraFunctions();
        displayPhoneFunctions();
    }
};   


int main(){
    SmartPhone obj;  

    obj.CameraFunctions(50, 10);
    obj.PhoneFunctions(6, 512);
    obj.displaysmartphone();

    return 0;
}