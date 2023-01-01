#include <iostream>
#include "mahasiswa.h"
using namespace std;

/* Nama: Reza Nur Ramadhan
   Kelas: D
   NPM: 2117051057 */ 

int main(){
    maha Maha;

    string nama;
    int npm;
    float UTS, UAS;

    cout<<"Masukan Nama: "; // Inputan
    getline(cin,nama);
    cout<<"Masukan NPM: ";
    cin>>npm;
    cout<<"Masukan Nilai UTS: ";
    cin>>UTS;
    cout<<"Masukan Nilai UAS: ";
    cin>>UAS;

    Maha.setNama(nama); // setter
    Maha.setNpm(npm);
    Maha.setUTS(UTS);
    Maha.setUAS(UAS);

    cout<<"\n\n";
    cout<<"Nama: "<< Maha.getNama() <<"\n"; // output getter
    cout<<"NPM: " << Maha.getNpm() <<"\n";
    cout<<"Nilai Akhir: "<< Maha.NilaiAkhir() <<"\n";
    cout<<"Huruf Mutu: "<< Maha.HurufMutu(Maha.NilaiAkhir());

    return 0;
}