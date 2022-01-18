//link : https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, p, q;
	int total = 0;
	
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> p >> q;
		if(q-p>=2){
			total++;
		}
	}
	cout << total;
}
