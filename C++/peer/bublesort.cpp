#include <iostream>
using namespace std;

int main(){
	int n;
	cin>> n;
	
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
	
	bool swapped;
	int temp;
	int index = n-1;
	
	do{
		swapped = false;
		for(int i = 0; i < index; i++){
			if(arr[i] < arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swapped = true;
			}
		}
	}while(swapped);
	
	for(int i = 0; i < n; i++){
		cout<<arr[i] <<" ";
	}
}
