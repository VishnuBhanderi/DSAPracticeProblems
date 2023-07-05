/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();

        // Approach 1
        int xor1 = 0;
        int xor2 = 0;
        for (int i = 0; i <= n; i++)
        {
            xor1 ^= i;
        }
        for (int i = 0; i < n; i++)
        {
            xor2 ^= nums[i];
        }
        return xor1 ^ xor2;

        // Approach 2
        // int sum = 0;
        // int ideal_sum = (n*(n+1))/2;
        // for(int i = 0; i<n; i++){
        //     sum = sum + nums[i];
        // }
        // return (ideal_sum - sum);
    }
};
// @lc code=end
