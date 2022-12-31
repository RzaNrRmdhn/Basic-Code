#include <iostream>
#include <stack>
#include <windows.h>
#define batas 5
using namespace std;

stack <int> b;
int data = 0, jmlh = 10;
int a[batas] = {2,4,5,6,7};

void daftar(){
    for(int i = 0; i < 5; i++){
        cout<< a[i] <<"\n";
    }
}

void Push(int a){
    if(data == jmlh){
        cout<<"penuh";
    }else{
        data++;
        b.push(a);
    }
}

void Pop(){
    if(data == 0){
        data--;
        a[data];
    }else{
        b.pop();
    }
}

void cetak(stack <int> a){
    while(!a.empty()){
        cout<< a.top() <<"\n";
        a.pop();
    }
}


int main(){
    int angka, c;
    

    do{
        system("cls");
        cetak(b);
        daftar();
        cin >> angka;

        switch(angka){
            case 1: 
                cin>> c;
                Push(c);
                break;

            case 2:
            	Pop();
         		break;       
        }
        

    }while(angka != 100);

    system("cls");
    for(int i = 0; i < jmlh; i++){
        cout<< b.top() <<"\n";
        b.pop();
    }
}
