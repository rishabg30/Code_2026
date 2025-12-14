#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

// Time and Space complexity
// TC: O(MaxElement)
// SC: O(MaxElement)

void solve()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Created a freq array storing count of elements
    vector<int> freq(1000, 0);
    int max_element = -1e9;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        max_element = max(max_element, arr[i]);
    }

    int si = 0;
    for (int i = 0; i <= max_element; i++)
    {
        while (freq[i] > 0)
        {
            arr[si] = i;
            freq[i]--;
            si++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
    // cin >> testCase;
    while (testCase--)
    {
        solve();
    }
}