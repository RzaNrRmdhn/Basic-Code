#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> angka;
    int a, b, c, d, e;

    cin>> a;
    for(int i = 0; i < a; i++){
        cin>> b;
        angka.push_back(b);
    }

    cin>>  c;
    cin>> d >> e;

    angka.erase(angka.begin() + (c-1));
    angka.erase(angka.begin() + (d-1), angka.begin() + (e-1));

    for(int i = 0; i < angka.size(); i++){
        cout<< angka[i] <<" ";
    }
}