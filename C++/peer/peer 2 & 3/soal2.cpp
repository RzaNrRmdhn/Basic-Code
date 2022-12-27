#include <iostream>
using namespace std;


int main(){
    int angka;

    cin>>angka;
    if(angka == 1){
        cout<< "Satu";
    }else if(angka == 2){
        cout<< "Dua";
    }else if(angka == 3){
        cout<< "Tiga";
    }else if(angka == 4){
        cout<< "Empat";
    }else{
        cout<<"Lebih Dari Empat";
    }
}