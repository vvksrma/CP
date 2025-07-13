#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
	int s = 0;
	int e = n - 1;

	int mid;

	while(s<=e){
		int mid = (s+e)/2;

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			e = mid - 1;
		}else{
			s = mid + 1;
		}
	}
	return -1;
}

int main(){
	int arr[] = {2, 5, 8, 9, 10, 12 , 18};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key;
	cin >> key;

	int res = binarySearch(arr, n, key);
	cout << res << endl;

	return 0;
}