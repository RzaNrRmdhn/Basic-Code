#include <iostream>
using namespace std;

int main(){
    string nama;
    int nilaiUts, nilaiUas;
    string huruf;
    
    cin>>nama;
    cin>>nilaiUts;
    cin>> nilaiUas;
    int rata = (nilaiUts + nilaiUas) /2; 
    cout<<"Nama\t\t: " <<nama<<endl;
    cout<<"Nilai Uts\t: "<<nilaiUts<<endl;
    cout<<"Nilai Uas\t: "<<nilaiUas <<endl;
    cout<<"Nilai Akhir\t: " << rata <<endl;
    
    // if(rata < 50){
    //     huruf = "E";
    // }else if(rata < 56){
    //     huruf = "D";
    // }else if(rata < 61){
    //     huruf = "C";
    // }else if(rata < 66){
    //     huruf = "C+";
    // }else if(rata < 71){
    //     huruf = "B";
    // }else if(rata < 76){
    //     huruf = "B+";
    // }else{
    //     huruf ="A";
    // }
    cout<<"Huruf Mutu\t: " <<huruf;

}
