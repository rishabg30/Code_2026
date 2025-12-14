#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

// Time and Space complexity
// TC: O(N)
// SC: O(26)

int isPossible(string s)
{
    int n = s.size();
    vector<int> freq(26, 0);

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }

    // Check if there is more than 1 char whose frequency is odd : then can't become palindrome

    int count_odd_freq = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            count_odd_freq++;
        }
        if (count_odd_freq > 1)
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    cout << isPossible("geeksforgeeks");
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