class Solution
{
public:
    // Function to find factorial of i;
    long long factorial(long long i)
    {
        if (i == 0)
        {
            return 1;
        }
        return i * factorial(i - 1);
    }
    vector<long long> factorialNumbers(long long N)
    {

        // Write Your Code here
        vector<long long> ans;
        long long i = 1;
        while (factorial(i) <= N)
        {
            ans.push_back(factorial(i));
            i++;
        }
        return ans;
    }
};