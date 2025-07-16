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

int countSetbits(int n){ //it only counts 1's bits 0's considered as empty log(N) complexity
	int count = 0;

	while(n > 0){
		int last_bit = (n&1);
		count += last_bit;

		n = n>>1;
	}
	return count;
}

int count_bits_hack(int n){
	int ans=0;

	while(n > 0){
		// Removes last bit from the current binary number
		n = n & (n-1);
		ans++;
	}
	return ans;
}

int decimal_to_binary(int n){
	int ans = 0;
	int p = 1;

	while(n > 0){
		int last_bit = (n&1);
		ans += p*last_bit;

		p = p*10;
		n = n >> 1;
	}
	return ans;
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

	int n;
	cin >> n; //1111


	// int get = getIthbit(n, i);
	// cout << "value of " << i << "th" << " bit: " << get << endl;

	// setIthbit(n, i);

	// cout << "By normal method: " << countSetbits(n) << endl;
	// cout << "By hack method: " << count_bits_hack(n) << endl;


	cout << n << endl;
	
	cout << decimal_to_binary(n) << endl;


	return 0;
}