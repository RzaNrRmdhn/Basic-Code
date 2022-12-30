#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int i;
    char nama[50];
    char huruf;
    int  jmlh=0;
    int spasi=0;
    
    cin>>huruf;
    cin.ignore(256,'\n');
    cin.getline(nama, 50, '\n');
    
    for(i=0; true; i++){
        if (nama[i]== '.'){
            break;

        }else if (nama[i] == huruf){
                jmlh++;

        }else if(nama[i] == ' '){
                spasi++;
        
        }
    }
    cout<< jmlh <<" " << spasi;
}