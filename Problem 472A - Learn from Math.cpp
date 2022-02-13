//=== Zalfa C++ ===
//link : https://codeforces.com/problemset/problem/472/A

#include <iostream>
using namespace std;

int main(){
	int n;
	int a,b;
	cin >> n;
	if(n % 2 == 0){
		a = n - 6;
		cout << "6" << " " << a;
	}
	else{
  	b = n - 9;
	  cout << "9" << " " << b;
  }
}
