/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Better Solution :- It requires extra space hence it can not be Optimal Solution
        //    map<int,int> mpp;
        //    for(int i = 0; i<nums.size();i++){
        //        mpp[nums[i]]++;
        //    }
        //    for(auto it:mpp){
        //        if(it.second > (nums.size()/2)){
        //            return it.first;
        //            break;
        //        }
        //    }
        //    return -1;
        // }

        // Optimal Solution :- Moore's Voting Algorithm

        int element;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt == 0)
            {
                element = nums[i];
                cnt = 1;
            }
            else if (nums[i] == element)
                cnt++;
            else
                cnt--;
        }
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == element)
                cnt1++;
        }
        if (cnt1 > (nums.size() / 2))
            return element;
        else
            return -1;
    }
};
// @lc code=end
