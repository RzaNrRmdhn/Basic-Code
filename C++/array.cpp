#include <iostream>
#include <cstdio>
using namespace std;

void masuk(int []);
void keluar(int []);

int main(){
    int d[4];
    int e;
    
    masuk(d);
    keluar(d);
}

void masuk(int a[]){
    for(int i = 0; i < 4; i++){
        cin >> a[i]; // 0 1 2 3 
    }
}

void keluar(int a[]){
    for (int i = 1; i < 4; i++){
        // batas + 1 = 1  (batas == 0)
        // batas == 1
        /// data[batas] = a[i] == data[1] == a[1]
        
        
}

// #include <iostream>
// #include <stdio.h>
// #define MAKS 20
// void pemasukan_data(float []);
// // void pengurutan_data(float []);
// void penampilan_data(float []);
// int jml;

// main(){
//     float data[MAKS];
//     pemasukan_data(data); //tanpa kurung siku
//     // pengurutan_data(data); //tanpa kurung siku
//     penampilan_data(data); //tanpa kurung siku
// }

// void pemasukan_data(float x[]) { //tanpa size
//     int i;
//     printf("Jumlah data = ");
//     scanf("%d", &jml);
//     for(i=0; i<jml; i++) {
//         printf("Data ke%d : ", i+1);
//         scanf("%f", &x[i]);
//     }
// }

// void penampilan_data(float x[]) { //tanpa size
//     int i;
//     printf("\nData setelah diurutkan :\n\n");
//     for (i=0; i<jml; i++) {
//         printf("Data ke%d : %g\n", i+1, x[i]);
//     }
// }