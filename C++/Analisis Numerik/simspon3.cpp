#include <iostream>
#include <math.h>
using namespace std;

float simpson(float a, float b, float n){
    float total = 0, hasil, interval;


    hasil = (b-a)/n;
    total += (1 / (1 + (pow(2.718, a)))) + (1 / (1 + (pow(2.718, b))));

    for(int i = 1; i < n; i+=3){
        total+= (3 * (1 / (1+(pow(2.718, (1 * hasil))))));
    }

    for(int i = 2;i < n; i+=3){
        total+= (3 * (1 / (1+(pow(2.718, (1 * hasil))))));
    }
    
    for(int i = 3;i < n; i+=3){
        total+= (2 * (1 / (1+(pow(2.718, (1 * hasil))))));
    }

    return (hasil * 3 / 8) * total;
    
}

int main(){
    float a, b, n;

    cin>> a >> b>> n;
    cout<<simpson(a,b,n);
}