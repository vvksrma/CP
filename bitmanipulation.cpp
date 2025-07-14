#include <bits/stdc++.h>
using namespace std;

int getIthbit(int n, int i){
	int mask = (1<<i);
	return (n & mask) > 0 ? 1 : 0;
}

void setIthbit(int &n, int i){
	int mask = (1<<i);
	n = (n|mask);
}

void clearIthbit(int &n, int i){
	int mask = ~(1<<i);
	n = n & mask;
}

int main(){
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
	// int x;
	// cin >> x;

	// if(x&1){
	// 	cout << "odd";
	// }else{
	// 	cout << "even";
	// }

	int n = 9; //001001
	int i;
	cin>>i;

	clearIthbit(n, i);

	cout << n;

	return 0;
}