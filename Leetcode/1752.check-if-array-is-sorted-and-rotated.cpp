/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
         for(int i = 0; i<n-1; i++){
             if(nums[i]>nums[i+1]) cnt++;
         }
         if(nums[0] < nums[n-1]) cnt++;
         if(cnt > 1) return false;
         else return true;
    }
};
// @lc code=end

