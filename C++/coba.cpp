#include <iostream>
using namespace std;

int pertambahan(int a, int b){ // saat dipanggil harus menggunakan cout<<
//    pengurangan(a, b);
    return a + b;
}

// int pertambahan(int a, int b, int c){
//     return a + b + c;
// }

// void pertambahan(int a, int b){ // saat dipanggil tidak perlu dengan cout<<
//     cout<< a + b; 
// }

void pengurangan(int a, int b){
    pertambahan(a, b);
    cout<< a - b;
}

// program utama
int main(){
    int angka;
    int angka_2;
    int pilihan;
    int hasil;
    int num[4];

    // for(int i = 0; i < 4; i++){ // looping untuk menginput data
    //     cin>>num[i];
    // }
    
    // for(int i = 0; i < 4; i++){ // looping untuk output data
    //     cout<< num[i] <<"\n";
    // }

    cout<<"Masukkan angka: ";
    cin>> angka; // 2

    cout<<"Masukkan angka kedua: ";
    cin>> angka_2; // 2

    pertambahan(angka, angka_2); // pemanggilan void
    // cout<< pertambahan(angka, angka_2) // pemanggilan fungsi

    // cout<<"Masukkan Pilihan: ";
    // cin>> pilihan; // 1

    // if (pilihan == 1){
    //     int hasil = angka + angka_2;
    //     cout<< hasil;

    // }else if(pilihan == 2){
    //     int hasil = angka - angka_2;
    //     cout<< hasil;
    // }else{

    //}
    
    // switch(pilihan){
    // case 1:
    //     hasil = angka + angka_2;
    //     cout<< hasil;
    //     break;    
    
    // default: // defaukt sama dengan else
    //     hasil = angka - angka_2;
    //     cout<< hasil;
    //     break;
    // } 
    
}
