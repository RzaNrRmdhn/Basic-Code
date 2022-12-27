#include <iostream>
using namespace std;

class Persegi{
    public: 
        double sisi; // input sisi == 10 
        // double == tipe data, sisi == variabel

        double keliling(){ // double == tipe fungsi, keliling == nama fungsi
            return sisi + sisi + sisi + sisi; // atau sisi * 4
        }

        double luas(){
            return sisi * sisi;
        }
};

int main(){
    Persegi persegi; // Persegi == nama class, persegi == variabel

    cin>> persegi.sisi; // abis . == punya si class
    cout<<persegi.keliling();
    cout<<persegi.luas();
}