#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int a;
    cin>>a;
    char kalimat[a][20];
    char kalimat1[a][20];
    
    for(int i = 0; i <= a; i++){
        cin.getline(kalimat[i], 20, '\n');
    }
    
    for(int i = 1; i <= a; i++){
        for(int j = 0 ; j < 20; j++){
            kalimat1[i][j]=(char)toupper(kalimat[i][j]);
        }
    }

    for(int i = 1; i <= a ; i++){
        if(strcmp(kalimat[i], kalimat1[i]) !=0){
            cout<<"Kecil\n";
        }else{
            cout <<"Besar\n";
        }
    }

}

