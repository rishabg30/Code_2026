#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

// Time and Space complexity
// TC: O(N)
// SC: O(26)

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }

    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    cout << isAnagram("anagram", "nagaram");
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