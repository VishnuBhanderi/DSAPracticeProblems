/*
 * @lc app=leetcode id=1838 lang=cpp
 *
 * [1838] Frequency of the Most Frequent Element
 */

// @lc code=start
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        unordered_map<int, int> freqMap;
        int maxFreq = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            freqMap[nums[i]]++;
            maxFreq = max(maxFreq, freqMap[nums[i]]);
        }

        for (const auto &pair : freqMap)
        {
            int num = pair.first;
            int freq = pair.second;
            int opsNeeded = 0;

            for (int i = 0; i < n; i++)
            {
                if (nums[i] < num)
                {
                    opsNeeded += (num - nums[i]);
                }
                else if (nums[i] > num)
                {
                    opsNeeded += (nums[i] - num) * freq;
                }

                if (opsNeeded > k)
                {
                    break;
                }

                maxFreq = max(maxFreq, freq + (k - opsNeeded) / num);
            }
        }

        return maxFreq;
    }
};
// @lc code=end
