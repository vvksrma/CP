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

void updateIthbit(int &n, int i, int v){
	clearIthbit(n, i);
	int mask = (v<<i);
	n = n|mask;
}

void clearlastIbits(int &n, int i){
	int mask = (-1 << i);
	n = n & mask;
}

void clearRangeofbits(int &n, int i, int j){
int a = (~0) << (j+1);
int b = (1<<i) - 1;
int mask = a|b;
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

	int n = 31; //1111
	int i;
	int j;
	cin>>i;
	cin >> j;

	// int get = getIthbit(n, i);
	// cout << "value of " << i << "th" << " bit: " << get << endl;

	// setIthbit(n, i);

	clearRangeofbits(n, i, j);

	cout << n << endl;

	return 0;
}