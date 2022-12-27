#include <iostream>
#include <cmath>
using namespace std;

int main(){
//	cout<<"Kegiatan\t: Peer Group" <<endl;
//	cout<<"Tempat\t\t: Online\n";
//	
//	cout<<"\"\"\" \n";
//	cout<<"\"  \" \n";
//	cout<<"\"  \" \n";
//	cout<<"\"  \" \n";
//	cout<<"\"\"\" \n";
//	
//	
//	cout<<"   *   \n";
//	cout<<"  ***  \n";
//	cout<<" ***** \n";
//	cout<<"*******\n";
//	
//	int a;
//	
//	cout<<"Masukkan nilai: ";
//	cin>>a;
//	cout<< sqrt(a);


//	char nama[30], kelas[3], kelompok[3], alamat[50];
//	cout<<"Input\n";
//	cout<<"Nama\t\t: ";
//	cin.getline(nama, 30);
//	cout<<"Kelas\t\t: ";
//	cin>>kelas;
//	cout<<"kelompok\t: ";
//	cin>>kelompok;
//	cout<<"Alamat\t\t: ";
//	cin.ignore(1,'\n');
//	cin.getline(alamat, 50);
//	
//	
//	cout<<"\n";
//	cout<<"Output\n";
//	cout<<"Nama\t\t: "<< nama <<endl;
//	cout<<"Kelas\t\t: "<< kelas <<endl;
//	cout<<"Kelompok\t: "<< kelompok<<endl;
//	cout<<"Alamat\t\t: "<< alamat<<endl;


	
	
	string nama, kelas, kelompok, alamat;
	
	cout<<"Input\n";
	cout<<"Nama\t\t: ";
	getline(cin,nama);
	cout<<"Kelas\t\t: ";
	cin>>kelas;
	cout<<"Kelompok\t: ";
	cin>> kelompok;
	cout<<"Alamat\t\t: ";
	cin.ignore(1,'\n'); // mengabaikan inputan diatas
	getline(cin, alamat); // input lebih dari satu kata
	
	cout<<"\n";
	cout<<"Nama\t\t: "<< nama <<endl;
	cout<<"Kelas\t\t: "<< kelas <<endl;
	cout<<"Kelompok\t: "<< kelompok <<endl;
	cout<<"alamat\t\t: "<< alamat <<endl;
	
	
}
