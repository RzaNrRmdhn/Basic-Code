#include <iostream>
#include <conio.h>
#include <bits\stdc++.h>
#define jmlh 20
using namespace std;


/*  Nama: Reza Nur Ramadhan
    Kelas: D
    Npm: 2117051057     */

struct Stack{ // struck untuk menyimpan procedur dan tipe data
    int batas = 0;
    float data[jmlh];

    void Push(){ // Berfungsi Memasukkan Angka Kedalam Stack
        if(batas == jmlh){ // pembatas jika batas == jmlh ( 20 == 20)
            cout<<"Penuh\n";
        
        }else{ // Jika Stack Masih Kosong maka akan ditambahkan dengan input
            batas++;
            cout<<"Masukkan Data: ";
            cin>> data[batas];
        }
    }

    void Pop(){ // Berfungsi Menghapus Angka dari stack
        if(batas == 0){ // jika batas == 0 maka stack masih kosong
            cout<<"Kosong!\n";
        
        }else{ // berfungsi untuk menghapus stack 
            data[batas--];
        }
    }

    void hitung(){ // Berfungsi Menghitung Operasi Pada dua stack Teratas
        char Operasi;
        float hasil;

        if(batas == 0 || batas == 1){ // Jika Batas == 0 atau 1, maka perhitungan tidak akan dilakukan, karena hanya 1 angka
            cout<<"Perhitungan Tidak Bisa!\n";
            system("Pause");

        }else{ // Melakukan Operasi
            cout<<"Masukkan Operasi: ";
            cin>> Operasi; // memasukkan Operasi

            switch(Operasi){

                case '+': // Jika Operasi == + tambah
                    hasil = data[batas - 1] + data[batas];
                
                    for(int i = 0; i < 2; i++){
                        data[batas--]; // Menghapus dua stack teratas
                    }

                    batas++;  // Menambah satu stack berupa hasil perhitungan
                    data[batas] =  hasil;
                    break;

                case '-': // jika Operasi == - kurang
                    hasil = data[batas - 1] - data[batas];
                
                    for(int i = 0; i < 2; i++){
                        data[batas--];
                    }

                    batas++;
                    data[batas] =  hasil;
                    break;
                
                case '*': // jika operasi == * perkalian
                    hasil = data[batas - 1] * data[batas];
                
                    for(int i = 0; i < 2; i++){
                        data[batas--];
                    }

                    batas++;
                    data[batas] =  hasil;
                    break;
                
                case '/': // Jika Operasi == / pembagian
                    hasil = data[batas - 1] / data[batas];
                
                    for(int i = 0; i < 2; i++){
                        data[batas--];
                    }

                    batas++;
                    data[batas] =  hasil;
                    break;
            }
        }
    }

    void cetak(){ // Berfungsi mencetak Output setelah di push, pop ataupun di hitung
        if(batas == 0){ // mencetak jika batas masih 0 maka kosong
            cout<<"===Data Stack====\n";
            cout<<"=Kosong=\n";
        
        }else{ // mencetak jika stack sudah terisi
            cout<<"===Data Stack===\n";
            for(int i = batas; i >=1; i--){ // Mencetak looping setiap angka yang sudah dimasukkan ke dalam angka
                cout<<"===   ["<<data[i]<<"]    ===" <<"\n";
            }
        }
    }
};      
