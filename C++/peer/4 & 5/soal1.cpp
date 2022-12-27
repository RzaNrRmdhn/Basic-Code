#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    // float a[10], total = 0;

    // for(int i = 0; i < 10; i++){ // masukkin nilai 1-10 ke array
    //     a[i]=i+1;
    // }

    // for(int i = 0; i < 10; i++){
    //     total += a[i]; // total = total + a[i] -> 0 + a[i]
    // }

    // for(int i = 0; i < 10; i++){
    //     cout<<"Elemen Bilangan ke-" <<i<<": "<<a[i]<<"\n";
    // }

    // cout<<"\nDeret Bilangan: ";
    // for(int i = 0; i < 10; i++){
    //     cout<<a[i]<<" ";
    // }

    // cout<<"\nJumlah Bilangan: "<<total<<"\n";
    // cout<<"Rata-Rata: "<<total/10;

    // int a[3][4];

    // for (int i = 0; i < 3; i++){
    //     for(int j = 0; j<4; j++ ){
    //         cin>> a[i][j];
    //     }
    // }
    // system("cls");
    // for (int i = 0; i < 3; i++){
    //     for(int j = 0; j<4; j++ ){
    //         cout<< a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    int n;
    cout<<"Masukkan Bilangan: ";
    cin>> n; // 5

    int a[n]; // a[10], a[5]
    int max;

    cout<<"Inputkan Bilangan: ";
    for(int i = 0; i < n; i++){
        cin>>a[i]; // 10 20 54 30 1
    }

    max = a[0]; //  max = 10
    for(int i = 0; i < n; i++){
       if(a[i] > max){ // a[0] > max, a[1] > max
        max = a[i]; // max awalnya 10, berubah jadi ke 20
       }
    }

    cout<<"Bilangan Terbesar: "<<max;

    // int a[5], b, c = 0, d[10], e = 0;

    // for(int i = 0; i < 5; i++){
    //     cin>> a[i];
    // }

    // cin>> b;
    // for(int i = 0; i < 5; i++){
    //     if(b == a[i]){
    //         c++;
    //         d[e] = i;
    //         e++;
    //     }
    // }

    // cout<<c<<"\n";
    // for(int i = 0; i < e; i++){
    //     cout<<"Baris Ke-"<< d[i] <<"\n";
    // }

    // int A[3][4]={{3,4,8,0},{3,9,2,1},{6,3,0,2}};
    
    // for (int b=0;b<3;b++){
    //     for (int k=0;k<4;k++){
    //         cout<<A[b][k]<<" ";
    //     }
    //     cout << endl;
    // }
    // system("pause");    
}