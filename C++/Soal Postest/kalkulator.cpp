#include <iostream>
using namespace std;

int main(){
    char operasi;
    float bil, bil2;

    cin>> bil >> bil2;
    cin>> operasi;
    
    switch (operasi){
        case '+':
            cout << bil + bil2;
            break;
    
        case '-':
            cout << bil - bil2;
            break;

        case '*':
            cout<< bil * bil2;
            break;
            
        case '/':
            cout<< bil / bil2;
            break;
    }
}