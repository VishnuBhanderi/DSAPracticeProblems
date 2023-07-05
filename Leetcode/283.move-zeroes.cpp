/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int i = -1;
        for (int k = 0; k < n; k++)
        {
            if (nums[k] == 0)
            {
                i = k;
                break;
            }
        }
        if (i != -1)
        {
            int j = i + 1;
            while (j < n)
            {
                if (nums[j] != 0)
                {
                    swap(nums[i], nums[j]);
                    i++;
                }
                j++;
            }
        }
    }
};
// @lc code=end
