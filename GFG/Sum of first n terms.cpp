
class Solution
{
public:
    long long sum = 0;
    long long sumOfSeries(long long N)
    {
        // code here
        if (N == 0)
        {
            return sum;
        }
        sum += N * N * N;
        sumOfSeries(N - 1);
    }
};