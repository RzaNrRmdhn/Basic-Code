#include <iostream>
using namespace std;
int main (){
	
	string nama;

	int nilai_uts, nilai_uas;
	float mean;
	string mutu[7]= {"A","B+","B","C+","C","D","E"};
	string hasil[3]= {" (LULUS)"," (LULUS BERSYARAT)"," (TIDAK LULUS)"};
	
	cout<<"MASUKAN NAMA : ";
	getline(cin,nama);
	cout<<"MASUKAN NILAI UTS : ";
	cin>>nilai_uts;
	cout<<"MASUKAN NILAI UAS : ";
	cin>>nilai_uas;
	
	cout<<"========================================"<<endl;
	
	mean = (nilai_uts + nilai_uas)/2;
	
		cout<<nama<<endl;
		cout<<"RATA-RATA NILAI : "<<mean<<endl;
		
	if(mean>=80 && mean <= 100 ){cout<<"HURUF MUTU ANDA : "<<mutu[0]<<hasil[0];
	}
	else if(mean <= 80 && mean >= 75){cout<<"HURUF MUTU ANDA : "<<mutu[1]<<hasil[0];
	}
	else if(mean < 75 && mean >= 70){cout<<"HURUF MUTU ANDA : "<<mutu[2]<<hasil[0];
	}
	else if(mean < 70 && mean >= 65){cout<<"HURUF MUTU ANDA : "<<mutu[3]<<hasil[1];
	}
	else if(mean < 65 && mean >= 55){cout<<"HURUF MUTU ANDA : "<<mutu[4]<<hasil[2];
	}
	else if(mean < 50 && mean >= 0){cout<<"HURUF MUTU ANDA : "<<mutu[6]<<hasil[2];
	}
	else{cout<<"NILAI TIDAK VALID";
	}
return 0;
	
}
