class Solution
{
public:
    // Complete this function
    int cnt = 1;
    void printNos(int N)
    {
        // Your code here
        // Base Condition
        if (cnt == N + 1)
            return;
        cout << cnt << " ";
        cnt++;
        printNos(N);
    }
};