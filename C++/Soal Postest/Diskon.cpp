#include <iostream>
using namespace std;

int main() {
    int harga, total;

    cin >> harga;

    
    if(harga < 149000){
        total = harga;
    }else if(harga  <= 249000){
        total = harga - (harga * 10 / 100);
    }else if(harga <= 349000){
        total = harga - (harga * 20/100);
    }else if(harga <= 449000){
        total = harga - (harga * 30/100);
    }else if(harga <= 549000){
        total = harga - (harga * 40/100);
    }else{
        total = harga - (harga * 50/100);
    }

    cout << total;
    

    return 0;
}