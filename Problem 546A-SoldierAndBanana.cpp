//link : https://codeforces.com/contest/546/problem/A

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	int a,b,c;
	int total =0;
	bool min = true;
	
	cin >> a >> b >> c;
	for(int i=1; i<=c; i++){
	   total = total + (a*i);
	}
	if(total > b){
	   cout << total - b;
	}
	else {
	    cout << "0";
	}
}
