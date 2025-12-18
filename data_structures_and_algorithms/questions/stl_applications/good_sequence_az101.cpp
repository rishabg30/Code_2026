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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int ans = 0;
    for (auto it : mp)
    {
        int element = it.first;
        int freq_of_element = it.second;
        if (element == freq_of_element)
        {
            continue;
        }
        else if (element > freq_of_element)
        {
            ans += freq_of_element;
        }
        else
        {
            ans += (freq_of_element - element);
        }
    }
    cout << ans << endl;
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