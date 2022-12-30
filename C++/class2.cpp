#include <iostream>
using namespace std;

class Persegi{
    public:
    float sisi;
    //double sisi;

    float volume(){
        return sisi * sisi * sisi;
    }

};

int main(){
    int n, i = 0;

    cin>> n; // n==3

    Persegi persegi[n]; // n == banyaknya data

    for(int i = 0; i < n; i++){
        cin>>persegi[i].sisi; // persegi[0].sisi == 2, persegi[1].sisi == 8, persegi[2].sisi == 10
    }

    for(int i = 0; i < n; i++){
        cout<<persegi[i].volume()<<"\n";
    }
}