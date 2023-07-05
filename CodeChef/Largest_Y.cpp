#include <bits/stdc++.h>
using namespace std;

int t, n, x;

bool check(int y, vector<int>& a) {
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(a[i] | y);
    }
    return s.size() > 1;
}

int sol(vector<int>& a, int x) {
    int l = 0, r = x, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid, a)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << sol(a, x) << endl;
    }
    return 0;
}
