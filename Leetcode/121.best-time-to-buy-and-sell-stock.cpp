/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxPro = 0;
        int n = prices.size();
        int minPrice = INT_MAX;

        for (int i = 0; i < n; i++)
        {

            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);
        }

        return maxPro;
    }
};
// @lc code=end
