#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

struct data{
    string nama, alamat, hp, kue;

    data *baru;
};

data *awal = NULL;
data *akhir = NULL;
data *pindah;
void menu();
void Enqueue(int antrian);
void Dequeue();
void Print();

int main(){
    int pilihan, queue = 0;

    do{
        system("cls");
        menu();
        cin>>pilihan;
        
        switch(pilihan){
            case 1:
                queue++;
                Enqueue(queue);
                break;
            
            case 2:
                Dequeue();
                queue--;
                break;
            
            case 3:
                Print();
                break;
        }

    }while(pilihan != 4);
}

void menu(){
    cout<<"================================\n";
    cout<<"| Lobby Antrian pesanan        |\n";
    cout<<"================================\n";
    cout<<"|   1. Buat Pesanan            |\n";
    cout<<"|   2. Hapus Pesanan           |\n";
    cout<<"|   3. Tampilkan Semua Pesanan |\n";
    cout<<"|   4. Exit                    |\n";
    cout<<"Masukkan Pilihan: ";

}

void Enqueue(int antrian){
    pindah = new data;
    string name, add, Telp, jenis;

    system("cls");
    cout<<"==================\n";
    cout<<"| Antrian Ke-" << antrian <<"|\n";
    cout<<"==================\n";
    cin.ignore(1,'\n');
    cout<<"Masukkan Nama Anda: ";
    getline(cin, name);
    cout<<"Masukkan Alamat Tujuan: ";
    getline(cin, add);
    cout<<"Masukkan Nomor HP: ";
    cin>> Telp;
    cout<<"Masukkan Jenis Kue: ";
    cin>> jenis;

    pindah->nama=name;
    pindah->alamat=add;
    pindah->hp=Telp;
    pindah->kue=jenis;
    pindah->baru=NULL;

    if(awal == NULL){
        awal=akhir=pindah;

    }else{
        akhir->baru=pindah;
        akhir=pindah;
    }
}

void Dequeue(){
    
    system("cls");
    if(awal == NULL){
        cout<<"=====================\n";
        cout<<"| Belum ada Pesanan |\n";
        cout<<"=====================\n";
        system("pause");

    }else{
        pindah = awal;
        awal=awal->baru;
        cout<<"==================\n";
        cout<<"| Pesanan" << "|\n";
        cout<<"| Telah dihapus  |\n";
        cout<<"==================\n";
        delete(pindah);
        system("pause");
    }
}

void Print(){

    system("cls");
    if(awal == NULL){
        cout<<"=====================\n";
        cout<<"| Belum ada Pesanan |\n";
        cout<<"=====================\n";
        system("pause");

    }else{
        pindah = awal;
        while(pindah!=NULL){
            cout<<"==================\n";
            cout<<"| Nama Pemesan: "<< pindah->nama << "|\n";
            cout<<"| Alamat Pemesan: "<< pindah->alamat << "|\n";
            cout<<"| No.Telp Pemesan: "<< pindah->hp << "|\n";
            cout<<"| Jenis Kue:  " << pindah->kue <<"|\n";
            pindah=pindah->baru;
        }
        system("pause");
    }
}
