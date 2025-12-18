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

    map<string, int> mp;
    while (n--)
    {
        string str;
        cin >> str;

        // We found entry inside our map already
        if (mp.find(str) != mp.end())
        {
            cout << str << mp[str] << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
        mp[str]++;
    }
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