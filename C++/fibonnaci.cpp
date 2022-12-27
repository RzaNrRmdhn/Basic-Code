#include <iostream>
using namespace std;

int main(){
    int n, f1 = 0, f2 = 1, berikutnya = 0;

    cin >> n;

    for (int i = 1; i <= n; ++i){
        if(i == 1){
            cout<<f1<<" ";
            continue;
        }
        if(i == 2){
            cout << f2 << " ";
            continue;
        }
        berikutnya = f1 + f2;
        f1 = f2;
        f2 = berikutnya;
         
        cout << berikutnya << " ";
    }
    return 0;

//     int n;
// cin >> n;

//     for(int i= 0; i < n; i++){
//         for(int j = n; j > i; j--){
//             cout << " ";
//         }
//         for(int k = 0; k < (2*i - 1); k++){
//             cout << "*";
//         }
//         cout << endl;
//     }

    
}

// #include <iostream>  
//  using namespace std;  
//  int main() {  
//    int awal,akhir;  
//    cin>>awal;  
//    cin>>akhir;  
// if(awal<0 || akhir<0){
//    	cout<<"Input Salah";
//    }else if (awal>akhir){
//    	cout<<"Input Salah";
//    }else {
//    for(int i=awal;i<=akhir;i++){ 
//    if(i==0){
//    	cout<<i<<" ";
//    } 
//      else if (i%5==0 && i%3==0 ){  

//        cout<<"Lima Belas ";  
//      }   
//      else if(i%2==0 && i%9==0){  
//        cout<<"Delapan Belas ";  
//      }  
//      else cout<<i<<" ";  
//    }   	
//    }

//    return 0;  
//  }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int baris, spasi, i, j;
//   cout << "Masukkan jumlah baris: ";
//   cin >> baris;
//   for (i = 1; i <= baris; i++)
//   {
//     for (spasi = i; spasi < baris; spasi++)
//           cout << " ";
//     for (j = 1; j <= i; j++)
//           cout << "* ";
//     cout << "\n";
//   }
//   return 0;
// }