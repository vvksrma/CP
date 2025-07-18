
/*  ॐ नमः शिवाय  */

#include <bits/stdc++.h>
using namespace std;

#define print cout <<

// QUESTION 1: Given 2N+1 nnumbers where every number comes twice except one number. find out that unique number
int uniqueNumber(vector<int> arr){
	int n = arr.size();
	int XOR = 0;

	for(int i = 0; i < n; ++i){
		XOR = XOR ^ arr[i];
	}
	return XOR;
}

pair<int, int> uniqueNumber2(vector<int> arr){
	int XOR = 0;
	for(int num : arr){
		XOR ^= num;
	}
	// return XOR;

	int setbit = XOR & (~(XOR-1));

	int first = 0, second = 0;

	for(int num : arr){
		if(num & setbit){
			first = first ^ num;
		}else{
			second = second ^ num;
		}
	}
	return {first, second};
}

int main(){
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    vector<int> arr = {1, 3, 5, 3, 6, 5, 1, 7};

    pair<int, int> result =  uniqueNumber2(arr);
    print result.first << ", " << result.second;

	return 0;
}