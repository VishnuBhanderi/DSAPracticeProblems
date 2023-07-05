class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int cnt = 0;
        int n = N;
        while (N > 0)
        {
            if (N % 10 != 0 && n % (N % 10) == 0)
            {
                cnt++;
            }
            N = N / 10;
        }
        return cnt;
    }
};