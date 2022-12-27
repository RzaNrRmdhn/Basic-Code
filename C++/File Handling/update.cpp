#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main(){
       //stream untuk menulis file
       ofstream myfile("filename.txt", ios::app);
       myfile << "Iya iyaa";

       myfile.close();


       //membuka file,
       //jika file tidak ditemukan maka file akan otomatis dibuat
    //    myfile.open("filename.txt", ios::app);

	//    cout<<"--------------"<<endl;
    //    cout<<"ADD TEKS FILE"<<endl;
    //    cout<<"--------------"<<endl;

    //    //fail() -> untuk memeriksa suatu kesalahan pada operasi file
    //    if(!myfile.fail()){
    //           //mmenambah teks ke dalam file
    //           myfile<<"Masa iya si"<<endl;
    //           cout<<"Text Berhasil ditambah ke dalam File"<<endl;
    //    }
	//    else{
    //           cout<<"File tidak ditemukan"<<endl;
    //    }
      
    //    _getche();
}
