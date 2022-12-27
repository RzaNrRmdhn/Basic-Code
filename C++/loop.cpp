#include <iostream>

using namespace std;

int main(){
	
	// int n;
	
	// cin >> n;
	
	// for( int i = 0; i <= n; i++){
		
	// 	cout<<"Hello " <<endl;
		
	// }

    // for( int i = 10; i >= 1; i--){

    //     cout<<i<<endl;

    // }

    // int i = 0;

    // int n;

    // cin>>n;

    // do{

    //     cout<< i << " ";   

    //     i++;  

    // }while(i <= n);

    // while(i < n){

    //     cout<<i<<" ";

    //     i++;
    // }


    for(int i = 0; i < 10; i++){ //i = 2
        cout<<" i="  << i <<" ";
        // lanjut ke j
        for(int j = 0; j < i; j++){ // j = 0, j < i (0 < 2), j = 0, j + 1 = 0 + 1 = 1
            cout<<" j=" << j << " ";
        }
        cout<<endl; // baris baru, kesini
    }
    
	return 0;
}