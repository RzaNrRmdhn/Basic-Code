#include <iostream>
using namespace std;

class Kubus{
    
    double sisi;
    public:

        Kubus(){ // contst default
            this-> sisi = 10; /// this - > == optional
        }

        Kubus(double sisi){ // contst default bedanya ada paramater
            this->sisi = sisi; // this-> sisi == paramater, =sisi == 10 atau double sisi
        }

        Kubus(Kubus &Kubus){
            this->sisi = Kubus.sisi; // .sisi == manggil sisi di class
        }

        double volume(){
            return sisi * sisi * sisi;
        }

        
};

int main(){
    Kubus kubus;
    cout<<kubus.volume()<<endl;
}

