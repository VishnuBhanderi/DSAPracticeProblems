/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();

        // Better Approach :- It's taking O(N^2) time comllexity which will cause TLE hence this can not be our optimal    Solution

        // int largestSum = INT_MIN;
        // int start = 0;
        // while (start < n){
        //     int sum = 0;
        //     for(int i = start ; i<n ; i++){
        //         sum += nums[i];
        //         largestSum = max(largestSum, sum);
        //     }
        //     start++;
        // }
        // return largestSum;

        // Optimal Solution :- Kadane's Algorithm :: T.C. - O(N) ; S.C. - O(1)

        int largestSum = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            largestSum = max(largestSum, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return largestSum;
    }
};
// @lc code=end
