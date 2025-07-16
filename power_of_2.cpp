
/*  ॐ नमः शिवाय  */

#include <bits/stdc++.h>
using namespace std;

/*	Objective: to check whether the number is power of 2 or not	*/
void powerof2(int n){
	if((n & (n-1)) == 0){
		cout << "its a power of 2" << endl;
	}else{
		cout << "its not a power of 2" << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
	int n;
	cin >> n;

	powerof2(n);

	return 0;
}