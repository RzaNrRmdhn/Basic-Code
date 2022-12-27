#include <iostream>
using namespace std;

int main(){
    string nama;
    int nilaiUts, nilaiUas;
    
    cin>>nama;
    cin>>nilaiUts;
    cin>> nilaiUas;

    cout<<"Nama\t\t: " <<nama<<endl;
    cout<<"Nilai Uts\t: "<<nilaiUts<<endl;
    cout<<"Nilai Uas\t: "<<nilaiUas <<endl;
    cout<<"Nilai Akhir\t: " <<(nilaiUts + nilaiUas) /2; 
}
