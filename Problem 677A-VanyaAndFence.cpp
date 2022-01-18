//link : https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, t, a;
	int sum = 0;
	
	cin >> n >> t;
	for(int i=1; i<=n; i++){
		cin >> a;
		if(a <= t){
			sum = sum + 1;
		}
		else{
			sum = sum + 2;
		}
	}
	cout << sum;
}
