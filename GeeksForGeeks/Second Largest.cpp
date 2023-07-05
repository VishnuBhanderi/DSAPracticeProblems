class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int Largest = INT_MIN;
        int Second_Largest = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > Largest)
            {
                Second_Largest = Largest;
                Largest = arr[i];
            }
            else if (arr[i] > Second_Largest && arr[i] != Largest)
            {
                Second_Largest = arr[i];
            }
            // cout << Second_Largest << " " << Largest << endl;
        }
        if (Second_Largest == INT_MIN || n < 2)
            return -1;
        else
            return Second_Largest;
    }
};