#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int si = 0, ans = 0;
    while (si < str.size())
    {
        if (str[si] == 'V')
        {
            ans += 5;
        }
        else if (str[si] == 'W')
        {
            ans += 2;
        }
        else if (str[si] == 'X')
        {
            si += 1;
        }
        else if (str[si] == 'Y')
        {
            if (si + 1 < str.size())
            {
                char ch = str[si + 1];
                si += 1;
                str.push_back(ch);
            }
        }
        else
        {
            if (si + 1 < str.size() && str[si + 1] == 'V')
            {
                ans /= 5;
            }
            else if (si + 1 < str.size() && str[si + 1] == 'W')
            {
                ans /= 2;
            }
            if (si + 1 < str.size() && (str[si + 1] == 'V') || (str[si + 1] == 'W'))
            {
                si += 1;
            }
        }
        si++;
    }
    cout << ans << endl;
}

signed main()
{
    // Used for fast_io_stream
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1;
    // cin >> testCase;
    while (testCase--)
    {
        solve();
    }
}