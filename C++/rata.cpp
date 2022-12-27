#include <iostream>
using namespace std;

/*
-> CARA PERTAMA
double rata(double a){
	return a / 5;
}

int main(){
	int nilai[5];
	int total = 0;
	for(int i = 0; i < 5; i++){
		cin>> nilai[i];
		total+=nilai[i];
	}
	
	cout<<rata(total);
}
*/


/*
-> CARA KEDUA
int n;

double rata(double nilai[]){
	double total = 0;
	for(int i = 0; i < n; i++){

		total+=nilai[i];
	}
	return total / n;
}

int main(){
	cin >> n;
	double nilai[n];
	for(int i = 0; i<n; i++){
		cin>> nilai[i];
	}
	
	cout<<rata(nilai);
}
*/


/*
-> CARA KETIGA 

double rata(double nilai[], int n){
	double total = 0;
	for(int i = 0; i < n; i++){

		total+=nilai[i];
	}
	return total / n;
}

int main(){
	int n;
	cin >> n;
	double nilai[n];
	for(int i = 0; i<n; i++){
		cin>> nilai[i];
	}
	
	cout<<rata(nilai, n);
}
*/


/*
-> CARA KE EMPAT
double rata(double nilai[5]){
	double total = 0;
	for(int i = 0; i < 5; i++){

		total+=nilai[i];
	}
	return total / n;
}

int main(){
	double nilai[5];
	for(int i = 0; i<5; i++){
		cin>> nilai[i];
	}
	cout<<rata(nilai);
}
*/


