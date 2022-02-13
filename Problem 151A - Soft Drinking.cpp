// === by Zalfa ===
//link : https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	int drink = k*l;
	int lime = c*d;
	int salt = p/np;
	int totalDrink = drink/nl;
	
	int arr[3] = {totalDrink, lime, salt};
	int min = arr[0];
	for(int i=0; i<3; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	int final = min / n;
	cout << final << endl;
}

