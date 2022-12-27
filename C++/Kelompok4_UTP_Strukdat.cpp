#include <iostream> // Library
#include <bits/stdc++.h>
using namespace std;

/*  KELOMPOK 4
    NAMA anggota: 
        Reza Nur Ramadhan --- 2117051057
        Nathania Santa Nigel Simbolon --- 2117051009
        Enjelita Aini Natasya --- 2117051028

    Tema: Program Kurir */

// Fungsi Deklarasi
float hitungjarak(float, float);
float ongkir(int);
void loading();
int kode(int);
void nama(string, string, string, string);

// Fungsi Main
int main(){
    int berat, jarak, angka;
    string harga[5] = {"1. 10000","2. 20000" ,"3. 30000" ,"4. 40000" ,"5. 50000"}; //  Deklarasi
    string name, address, receiver, destinasi;

    // deskripsi
    cout<<"Masukan Nama Pengirim: ";
    getline(cin, name); // read
    cout<<"Masukan alamat Pengirim: ";
    getline(cin, address); // read
    cout<<"Masukan Nama Penerima: ";
    getline(cin, receiver); // read
    cout<<"Masukan alamat Penerima: ";
    getline(cin, destinasi); // read

    cout << "\nSilakan masukkan berat barang(Kg): ";
    cin>> berat; // read(berat)
    cout<<"Masukan jarak(Km): ";
    cin>> jarak; // read
    cout<<"Kode Alamat Anda: "<< kode(jarak) <<"\n"; // write(kode(jarak))
    system("pause");
    loading();

    cout<<"Ongkir Bedasarkan Kode Alamat: "<<"\n";
    for(int i = 0; i < 5; i++){
        cout<<harga[i]<<"\n"; // write(harga[i])
    }
    cout<<"Masukan Kode Alamat: ";
    cin>> angka; // read
    loading();

    nama(name, address, receiver, destinasi);
    cout<<"\nTotal Harga: Rp"<< hitungjarak(berat, ongkir(angka));

    return 0;
}

// Fungsi Definisi
void nama(string pengirim, string alamat, string penerima, string tujuan){

    cout<<"===Struck Anda===";
    cout<<"\nMasukan Nama Pengirim: " <<pengirim;
    cout<<"\nMasukan alamat Pengirim: " <<alamat;
    cout<<"\nMasukan Nama Penerima: " <<penerima;
    cout<<"\nMasukan alamat Penerima: " <<tujuan;

}

void loading(){
    int a;
    for (a=100; a>=0; a--){ // animasi loading
      cout << "loading ";
      system("cls");
    }
}

int kode(int b){      
    int code; // mengecek kode alamat bedasarkan jarak yang diinput

    if(b < 10){
        code = 1;
    }else if(b < 20){
        code = 2;
    }else if(b < 30){
        code = 3;
    }else if(b < 40){
        code = 4;
    }else{
        code = 5;
    }
    return code;
}

float ongkir(int c){
    int hasil;
    
    //menghitung ongkir
    switch(c){
        case 1:
            hasil = 10000;
            break;
        case 2:
            hasil = 20000;
            break;
        case 3:
            hasil = 30000;
            break;
        case 4:
            hasil = 40000;
            break;
        case 5:
            hasil = 50000;
            break;
    }
    return hasil;
}

float hitungjarak(float d, float e){
    float total;
    total = d * e;  // Berat x Ongkir
    return total; // total harga
}
