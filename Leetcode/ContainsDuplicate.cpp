/*
This problem contains duplicate can be solved using 3 approaches

1. bruteforce - O(n^3)
2. sorting + loop - O(n logn)
3. Unordered set - O(n)

brute force - we will make two loops i and j and then compare them in k loop and return the true or false
Sorting approcach - first of all we will sort the array using sort function then it is more easy to find the duplicate element by compairing the 
nums[0] == nums[i-1] then return true or false
Unordered set - we will make a unordered set seen then make a for each loop of num : nums then using count function we will check the result true or false
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
// This approach follows the sorting + loop approach its time complexity is O(n logn) due to usage of sort function
    bool cDsorting(vector<int>& nums){
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i - 1]){
                return true;
            }
        }
        return false;
    }
// Brute force approach
    bool cDbruteforce(vector<int>& nums){
        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }

// Currently i learnt about only these appraches but will update unsorted sets approach soon
};

int main(){
    vector<int> nums = {1, 2, 3, 4, 7, 5, 6};

    Solution sol;

    int res = sol.cDbruteforce(nums);

    cout << (res ? "true" : "false") << endl;


    return 0;

}