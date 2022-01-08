//my correct solution :
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	int n;
	int col, line, loc;
	
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin >> n;
			if(n==1){
				line = i;
				col = j;
			}
		}
		loc = abs(3-line) + abs(3-col);
	}
	cout << loc;
}

//dont use this one! this code will brought you to time limit exceeded idk why..

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//
//	int matx[5][5];
//	int col,line,loc;
//	for(int i = 1; i<=5; i++){
//	    for (int j = 1; j<=5; j++){
//	        cin >> matx[i][j];
////finding the 1 in matrix
//            if (matx[i][j] == 1){
//                line = i;
//                col = j;
//            }
//	    }
//        loc =abs(3-line) + abs(3-col);
//	}
//cout << loc;
//}
