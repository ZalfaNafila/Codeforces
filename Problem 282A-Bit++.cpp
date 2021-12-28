#include <iostream>
using namespace std;

int main(){
	
	int n, x = 0;
	string symb;
	cin >> n;

	for (int i=0; i<n; i++){
		
		cin >> symb;
		if (symb[1] == '+'){ //because the symbol of + was on the 2nd character of input (means it was on the 1 [0,1,2])
			x++;
		}
		else if (symb[1] == '-'){
			x--;
		}
	}
	cout << x;
}
