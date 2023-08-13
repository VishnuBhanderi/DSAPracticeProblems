/*
 * @lc app=leetcode id=2149 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int posInd = 0;
        int negInd = 1;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]>0){
                ans[posInd] = nums[i];
                posInd+=2;
            }
            else{
                ans[negInd] = nums[i];
                negInd+=2;
            }
        }
        return ans;
    }
};
// @lc code=end

