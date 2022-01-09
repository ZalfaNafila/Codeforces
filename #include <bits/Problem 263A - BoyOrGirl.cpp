//link : https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string n;
    cin >> n;
    int a = n.size();
    int sum = 0,b;
    
	sort(&n[0],&n[a]);
    for(int i=0; i<a; i++){
    	if (n[i] != n[i+1]){
    		sum++;
		}
	}
	if(sum % 2 == 0){
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
}
    
