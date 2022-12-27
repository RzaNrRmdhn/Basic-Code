#include <iostream>
using namespace std;

int main(){
    int batas;

    cout<< "Masukkan Jumlah Bilangan: ";
    cin>> batas;

    if(batas < 3){
        main();
    }
    else{
        int angka[batas];

        cout<<"Masukkan Angka: ";
        for(int i = 0; i < batas; i++){
            cin>> angka[i]; 
        }
        
        int angka2[batas];
        for(int i = 0; i < batas; i++){
            if(angka[i] != 9){
                angka2[i] = angka[i] + 1;
            }else{
                angka2[i] = 0; 
            }
        }
        
        for(int i = 0; i < batas; i++){
        cout<< angka2[i];
        }
    }

    
}