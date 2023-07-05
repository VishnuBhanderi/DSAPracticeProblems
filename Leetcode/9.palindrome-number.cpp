/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long n = (long)x;
        if (x >= 0)
        {
            long reverseX = 0;
            while (x > 0)
            {
                reverseX = reverseX * 10 + x % 10;
                x = x / 10;
            }
            if (n == reverseX)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
