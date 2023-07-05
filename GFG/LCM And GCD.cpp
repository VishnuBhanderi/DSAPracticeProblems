class Solution
{
public:
    vector<long long> lcmAndGcd(long long A, long long B)
    {
        // code here
        long long temp1 = A;
        long long temp2 = B;

        while (temp1 != temp2)
        {
            if (temp1 > temp2)
            {
                temp1 -= temp2;
            }
            else
            {
                temp2 -= temp1;
            }
        }

        long long gcd = temp1;
        long long lcm = A * B / gcd;

        vector<long long> ans;
        ans.push_back(lcm);
        ans.push_back(gcd);

        return ans;
    }
};