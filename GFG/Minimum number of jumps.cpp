class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        if (n <= 1)
        {
            return 0; // No jumps needed for an empty array or a single element array
        }

        if (arr[0] == 0)
        {
            return -1; // Cannot move from the first element itself
        }

        int maxReach = arr[0]; // Maximum index that can be reached
        int steps = arr[0];    // Number of steps remaining in current jump
        int jumps = 1;         // Minimum jumps required to reach the end

        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                return jumps; // Reached the end of the array
            }

            maxReach = max(maxReach, i + arr[i]);
            steps--;

            if (steps == 0)
            {
                if (i >= maxReach)
                {
                    return -1; // Cannot reach further from the current position
                }

                jumps++;
                steps = maxReach - i;
            }
        }

        return -1; // Unable to reach the end of the array
    }
};