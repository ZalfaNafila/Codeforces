//link : https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	char s;
	int Dtotal=0;
	int Atotal = 0;
	
	for(int i=1; i<=n; i++){
		cin >> s;

			if(s == 'D'){
				Dtotal++;
			}
			else if(s == 'A'){
				Atotal++;
			}
		}
		if(Atotal < Dtotal){
			cout << "Danik";
		}
		else if(Atotal > Dtotal){
			cout << "Anton";
		}
		else {
			cout << "Friendship";
		}
}
