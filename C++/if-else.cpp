#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 2;

    /* 
    if(kondisi){
        pernyataan;
    }else{
        pernyataan;
    }
     */

    /* if(a < b){
        cout<<"Lebih Kecil";
    
    }else if(a == b){
        cout<<"Sama Dengan";
    
    }else{
        cout<<"Lebih besar";
    } */

    string nama;
    cin>>nama;
    switch(nama){
        case "reza":
            cout<<"Satu";
            break;
        case "dua":
            cout<< "Dua";
            break;
        default:
            cout<<"Random";
            break;
    }
}