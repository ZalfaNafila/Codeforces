//READ DESC PLEASSSSEEEEEEEEEEEEE
//link : https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5];
	int total = 0;
	
	for(int i=1; i<=4; i++){
		cin >> a[i];
	}

	for(int j=1; j<=4; j++){
		if(a[j] == a[j+1]){
			total++;
		}
	}
	cout << total << endl;
}
