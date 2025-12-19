#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

// Time and Space complexity
// TC: O(NlogN)
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

    int countCandies = 0;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    while (k--)
    {
        int num = pq.top();
        pq.pop();
        countCandies += num;

        pq.push(num / 2);
    }
    cout << countCandies << endl;
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