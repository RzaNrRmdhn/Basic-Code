#include <iostream>
#include <math.h>
using namespace std;

float reimann(float a, float b, float n){
    float total = 0, hasil, interval;


    hasil = (b-a)/n;
    total += (1 / (1 + (pow(2.718, a))));

    for (int i = 1; i < n; i++){
        interval = a + (i * hasil);
        total+= (1 / (1 + (pow(2.718, interval))));
    }
    
    return hasil * total;
}

int main(){
    float a, b, n;

    cin>> a >> b>> n;
    cout<<reimann(a,b,n);
}