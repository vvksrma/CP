
/*  ॐ नमः शिवाय  */

#include <bits/stdc++.h>
using namespace std;

/*	Question: You are given two 32-bit numbers, N and M, and two bit positions i and j.
	write a method to set all bits between i and j in N equal to M.
	M (becomes a substring of N locationed at and starting at j)	*/

void clearRangeofbits(long long int &n, int i, int j){
	int a = (~0) << (j+1);
	int b = (1<<i) - 1;
	int mask = a|b;
	n = n & mask;
}

void replaceBits(long long int &n, int i, int j, int m){
	clearRangeofbits(n, i, j);
	int mask = (m<<i);
	n = n | mask;
}

int main(){
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
	// code here
	long long int n = 15;
	int m = 2;
	int i = 1;
	int j = 3;

	replaceBits(n, i, j, m);

	cout << n << endl;




	return 0;
}