#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

// Time and Space complexity
// TC: O(NLogN)
// SC: O(N)

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;
    int countPairs = 0;
    for (int i = 0; i < n; i++)
    {
        // For duplicacy
        if (k == 0)
        {
            if (mp.find(arr[i] - k) != mp.end())
            {
                countPairs += mp[arr[i] - k];
            }
        }
        else
        {
            // First check if difference of arr[i] - k  is already present or not
            if (mp.find(arr[i] - k) != mp.end())
            {
                countPairs += (mp[arr[i] - k]);
            }
            // First check if difference of arr[i] + k  is already present or not
            if (mp.find(arr[i] + k) != mp.end())
            {
                countPairs += (mp[arr[i] + k]);
            }
        }
        mp[arr[i]]++;
    }
    cout << countPairs << endl;
}

signed main()
{
    // Used for fast_io_stream
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "wle", stdout);
#endif

    int testCase = 1;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
}