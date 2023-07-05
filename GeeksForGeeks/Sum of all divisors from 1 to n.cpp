class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        vector<long long> divisors(N + 1, 0);

        for (int i = 1; i <= N; i++)
        {
            for (int j = i; j <= N; j += i)
            {
                divisors[j] += i;
            }
        }

        long long sum = 0;
        for (int i = 1; i <= N; i++)
        {
            sum += divisors[i];
        }

        return sum;
    }
};