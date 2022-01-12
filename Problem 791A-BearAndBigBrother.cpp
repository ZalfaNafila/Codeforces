//link : https://codeforces.com/contest/791/problem/A

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
  cin.tie(0);
  
	int a,b;
	int sum = 0;
	
	cin >> a >> b;
	while(a<=b){
	    a = a*3;
	    b = b*2;
	    sum++;
}
	
	cout << sum;
}
