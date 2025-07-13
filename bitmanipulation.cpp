#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
	int x;
	cin >> x;

	if(x&1){
		cout << "odd";
	}else{
		cout << "even";
	}


	return 0;
}