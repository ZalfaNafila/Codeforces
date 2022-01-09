// link : https://codeforces.com/contest/236/problem/A

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,a,b;
    cin >> n;
    for (int i=0; i<n; i++){
    	cin >> a >> b;
			if(a % b == 0){
				cout << "0" <<"\n";
				}
			else{
				int c = b - a%b;
				cout << c << "\n";
			}
		}
	}
		
