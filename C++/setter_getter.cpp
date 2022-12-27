#include <iostream>
using namespace std;

class Kubus{
    double sisi;

    public:
        double getSisi(){
            return this->sisi; 
        }

        double setSisi(double sisi){
            return this-> sisi = sisi;
            
        }
        
        double volume(){
            return sisi * sisi * sisi;
        }
};

int main(){
    Kubus kubus;
    kubus.setSisi(10);
    cout << kubus.volume() << endl;
}
