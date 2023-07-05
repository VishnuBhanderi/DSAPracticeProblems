/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    int i = 0;

    bool isPalindromeHelper(const string &s, int start, int end)
    {
        // Base case: if start and end cross each other, the substring has been checked
        if (start >= end)
        {
            return true;
        }

        char left = tolower(s[start]);
        char right = tolower(s[end]);

        // Skip non-alphanumeric characters
        if (!isalnum(left))
        {
            return isPalindromeHelper(s, start + 1, end);
        }
        if (!isalnum(right))
        {
            return isPalindromeHelper(s, start, end - 1);
        }

        // Check if the characters at start and end positions are equal
        if (left != right)
        {
            return false;
        }

        // Recursive call with the next positions
        return isPalindromeHelper(s, start + 1, end - 1);
    }

    bool isPalindrome(string s)
    {
        return isPalindromeHelper(s, 0, s.length() - 1);
    }
};
// @lc code=end
