#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pbf push_front
#define popb pop_back
#define popf pop_front

int main(){
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    //--------------------------vector-------------------------

	// Empty container constructor
	// vector<int> first = {10, 20, 30, 40};

	// //fill container constructor
	// vector<int> second(4, 20);

	// // //Range constructor
	// int number[] = {10, 20, 30, 40};
	// vector<int> third(number, number+4);

	// // //Copy Constructor
	// vector<int> fourth(third);

	// for (int i = 0; i < second.size(); ++i) {
    //     cout << second[i] << " ";
    // }
    // cout << endl;

	// cout << first.at(2) << endl;

	// cout <<"at index 2: " <<first[2]<<endl;

	// cout<<"Size: " <<first.size() << endl;

	// cout << "Max Size: " <<first.max_size() << endl;

	// cout << "Capacity: " << first.capacity() << endl;

	// first.pb(50);
	// first.pb(60);
	// first.pb(70);
	// first.pb(80);
	// first.pb(90);

	// // for(int i = 0; i <= first.capacity(); ++i){
	// // 	cout << first[i] << ", ";
	// // }
	// // cout << endl;

	// vector<int>::iterator it = first.erase(first.begin(), first.begin() + 2);

	// for(int x : first) cout << x << " ";
		// cout << endl;

	// cout << "Updated Capacity: " << first.capacity() << endl;



	// ---------------------Deque------------------------

	// deque<int> first;  // Empty deque

    // deque<int> second(4, 100);  // 4 elements with value 100

    // deque<int> third(second.begin(), second.end());  // Range constructor

    // deque<int> fourth(third);  // Copy constructor

    // int myints[] = {10, 20, 30, 40, 50};
    // int n = sizeof(myints)/sizeof(int);
    // deque<int> fifth(myints, myints+n);

    // for(int val : fifth){
	// 	cout << val << ", ";
	// }
	// cout << endl;

	// cout << "fornt of fifth: " << fifth.front() << endl;
	// cout << "back of fifth: " << fifth.back() << endl;


	// cout << "Element of third deque: ";
	// for(int i = 0; i < third.size(); ++i){
	// 	cout << third[i] << ", ";
	// }
	// cout << endl;

	// first.pb(1);
	// first.pb(3);
	// first.pb(7);
	// first.pb(9);
	// first.pb(2);
	// first.pb(5);

	// //Range based for loop to print all the elements under the deque
	// cout << "Element after pushing elements: ";
	// for(int val : first){
	// 	cout << val << ", ";
	// }
	// cout << endl;

	// cout << "Element after poping last element: ";
	// first.pop();

	// for(int val : first){
	// 	cout << val << ", ";
	// }
	// cout << endl;

	// cout << "Element after poping front element: ";
	// first.popf();

	// for(int val : first){
	// 	cout << val << ", ";
	// }
	// cout << endl;

	// cout << "Element after pushing new front element: ";
	// first.pbf(10);

	// for(int val : first){
	// 	cout << val << ", ";
	// }
	// cout << endl;

	// deque<int> dq(10);
	// for (int i = 0; i < dq.size(); ++i){
	// 	dq[i] = i*i;
	// }

	// for(auto x : dq){
	// 	cout << x << ", ";
	// }
	// cout<< endl;

	// cout << "Size of dq; " << dq.size() << endl;



	// ---------------------Queue------------------

	// queue<int> q;

	// q.push(1);
	// q.push(2);
	// q.push(3);
	// q.push(4);
	// q.push(5);
	// q.push(6);

	// while(!q.empty()){
	// 	cout << q.front() << ", ";
	// 	q.pop();
	// }
	// cout << endl;

	// ---------------------Priority Queue-------------------------
    int arr[] = {1, 6, 8, 3, 15, 30, 10};
    int n = sizeof(arr)/sizeof(int);

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int val : arr){
    	pq.push(val);
    }

    while(!pq.empty()){
    	cout << pq.top() << " ";
    	pq.pop();
    }
	return 0;
}