#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	for (int i = 0; i<a; i++){
		string b;
		cin >> b;
		int size = b.size();
		
		if (size <= 10){
			cout << b <<endl;
		}
		else{
			cout << b[0] << size - 2 << b[size - 1] << endl;
		}
	
	}
}

