class Solution
{
public:
    int cnt = 0;
    void printGfg(int N)
    {
        // Code here
        // Base Condition
        if (cnt == N)
            return;
        cout << "GFG ";
        cnt++;
        printGfg(N);
    }
};