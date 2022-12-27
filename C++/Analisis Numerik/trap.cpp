#include <iostream>
#include <math.h>
using namespace std;
/**
 * Reza Nur Ramadhan
 * Kelas D
 * 2117051057
*/


float trap(float a,float b, float n){
    float hasil, total = 0, interval = 0;
    hasil = (b-a)/n;
    total = total + (2 * pow(a,3)) + (2 * pow(b,3));
    for(int i=1; i < n; i++){
        interval = a + (i*hasil);
        total = total + (2 * ( 2 * (pow(interval, 3))));
    }

    float trap = hasil / 2 * total;
    return trap;
}

int main(){
    int a = 2,b = 7,n;
    
    cout<<"Masukkan Jumlah Pembagi: ";
    cin>>n;

    cout<<"Hasil Trapezoida: "<<trap(a,b,n);
}