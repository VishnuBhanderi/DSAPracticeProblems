/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        k = k%n;
        //Right shift by k position
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k, nums.end());
        reverse(nums.begin(), nums.end());

        
        //Left shift by k position
        // reverse(nums.begin(),nums.begin()+k);
        // reverse(nums.begin()+k, nums.end());
        // reverse(nums.begin(), nums.end());
    }
};
// @lc code=end

