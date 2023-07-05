#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        bool isChef = true;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        sort(arr.begin(), arr.end());

        int min = arr[0];
        
        if(min %2 == 0){
            isChef = !isChef;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] - min;
            sum = sum + arr[i];
        }

        if(sum %2 != 0 ){
            isChef = !isChef;
        }
        
        if(isChef){
            cout << "CHEF" << endl;
        }
        else{
            cout << "CHEFINA" << endl;
        }
        
    }
}