#include <iostream>
#include <queue>
#include <stack>
#define jmlh 10
#define batas 5
using namespace std;

    queue<int> obat1;
    int data = 0;
    int a[batas] = {2,4,5,6,7};
    
    void clear(){
        system("cls");
    }

    void Enqueue(int medic){
        if(data == jmlh){
            cout<<"Antrian Penuh";
        
        }else{
            data++;
            obat1.push(medic);
        }
    }

    void Dequeue(){
        if(!obat1.empty()){
            data--;
            obat1.pop();

        }else{
            cout<<"Tidak ada Pembelian Obat";
        }
    }

    void Print(queue<int> medkit){
        while (!medkit.empty()){
            cout<< medkit.front()<<"\n";
            medkit.pop();
        }
        
    }

    void daftar(){
    for(int i = 0; i < 5; i++){
        cout<< a[i] <<"\n";
    }
}

int main(){
    int angka, c;
    

    do{
        system("cls");
        Print(obat1);
        daftar();
        cin >> angka;

        switch(angka){
            case 1: 
                cin>> c;
                Enqueue(c);
                break;

            case 2:
            	Dequeue();
         		break;       
        }
        

    }while(angka != 100);

}