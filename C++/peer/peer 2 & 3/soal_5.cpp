#include <iostream>
using namespace std;

int main() {
	int n, f1 = 1, f2 = 1, fn;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		if(i == 1) {
			cout << f1;
		} else if(i == 2) {
			cout << f2;
		} else {
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			cout << fn;
		}
		cout << " ";
	}
}
