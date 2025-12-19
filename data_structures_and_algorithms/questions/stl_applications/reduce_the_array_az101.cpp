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

    priority_queue<int, vector<int>, greater<int>> pq;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    // Idea is to always elimate two smallest numbers together
    while (pq.size() > 1)
    {
        int num1 = pq.top();
        pq.pop();
        int num2 = pq.top();
        pq.pop();

        ans += num1 + num2;
        pq.push(num1 + num2);
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