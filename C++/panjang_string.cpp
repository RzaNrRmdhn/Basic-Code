#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a;
    cin>>a;
    char panjang[a][20];

    for(int i = 0; i <= a; i++ ){
        cin.getline(panjang[i], 20, '\n');
    }

    for(int i = 1; i <= a; i++){
        cout<<panjang[i] <<" " << strlen(panjang[i])<<"\n";
    }
}