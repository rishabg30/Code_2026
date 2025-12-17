#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    vector<vector<int>> dirS = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int r, c;
    cin >> r >> c;
    r = r - 1, c = c - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == r && j == c)
            {
                // We are at the position
                for (int d = 0; d < 8; d++)
                {
                    int new_r = i + dirS[d][0];
                    int new_c = j + dirS[d][1];

                    if (new_r >= 0 && new_c >= 0 && new_r < n && new_c < m && arr[new_r][new_c] != 'x')
                    {
                        cout << "no" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "yes" << endl;
}

signed main()
{
    // Used for fast_io_stream
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
}