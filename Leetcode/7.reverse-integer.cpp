/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int n = x;
        if (x < 0)
        {
            x = (long)(-1) * x;
        }
        long reverseX = 0;
        while (x > 0)
        {

            if ((reverseX * 10) + x % 10 > INT_MIN && (reverseX * 10) + x % 10 < INT_MAX)
            {
                reverseX = (reverseX * 10) + x % 10;
            }
            else
            {
                return 0;
                break;
            }

            x = x / 10;
        }
        if (n < 0)
        {
            reverseX = (-1) * reverseX;
        }
        return (int)reverseX;
    }
};
// @lc code=end
