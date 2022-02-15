//=== By Zalfa ===
// link :  https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n[4],a,b,c,d;
	string s;
	int sum=0,sum2=0,sum3=0,sum4=0;
	int total=0;
	
		cin >> a >> b >> c >> d;
		cin >> s;
		
	for(int i = 0; i<s.length(); i++){
	if(s[i] == '1'){
		sum+=a;
	}
	else if(s[i] == '2'){
		sum2+=b;
	}
	else if(s[i] == '3'){
		sum3+=c;
	}
	else if(s[i] == '4'){
		sum4+=d;
	}
}
	total = sum + sum2 + sum3 + sum4;
	cout << total << endl;
}
