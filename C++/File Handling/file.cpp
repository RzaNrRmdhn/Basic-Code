#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main() {

   ofstream MyFile("filename.txt");
   MyFile << "Nama: Reza Nur Ramadhan\n";
   MyFile << "Nama: Reza Nur Ramadhan\n";
   MyFile << "Nama: Reza Nur Ramadhan";
  


   MyFile.close();

     //stream untuk menulis file
//       ofstream myfile;
//
//       //membuka file,
//       //jika file tidak ditemukan maka file akan otomatis dibuat
//       myfile.open("DDPPRAKTIKUM.txt", ios::app);
//
//	   cout<<"--------------"<<endl;
//       cout<<"MENULIS FILE"<<endl;
//       cout<<"--------------"<<endl;
//
//       //fail() -> untuk memeriksa suatu kesalahan pada operasi file
//       if(!myfile.fail()){
//              //menulis ke dalam file
//              myfile<<"Belajar DDP Menyenangkan :)"<<endl;
//              myfile.close(); //menutup file
//              cout<<"Text Berhasil ditulis ke dalam File"<<endl;
//       }
//	   else{
//              cout<<"File tidak ditemukan"<<endl;
//       }
      
//       _getche();

}
