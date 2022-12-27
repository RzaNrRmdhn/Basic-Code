#include <iostream>
#include <cstring>
#include <conio.h>
#include <string.h>
using namespace std;

class String{
    private:
        char nama[25];

    public:
        String(){
            this->nama[25] ={"Jessica"};
        }
        char setSisi(char nama[]){
            return this->nama[25] = nama[25];
        }

        char getSisi(){
            return this->nama[25];
        }

        void toHurufKecil(){
            for(int i = 0; i < strlen(nama); i++){
                cout<< tolower(nama[i]);
            }
        }
};

int main(){
    String str;

    str.setSisi("Jessica");
    cout<< str.getSisi();
    str.toHurufKecil();
}