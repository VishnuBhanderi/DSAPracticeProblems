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
         int ind = 0;
         while(n-1>0 && cnt == 0){
            if(nums[ind] <= nums[ind+1] ){
                ind++;
                n--;
            }
            else{
                cnt++;
                ind++;
                n--;
            }
         }
         while(n-1>0 && cnt == 1){
            if(nums[ind] <= nums[ind+1] && nums[ind+1] <= nums[0] ){
                ind++;
                n--;
            }
            else{
                cnt++;
                ind++;
                n--;
            }
         }
         if(cnt > 1) return false;
         else return true;
    }
};
// @lc code=end

