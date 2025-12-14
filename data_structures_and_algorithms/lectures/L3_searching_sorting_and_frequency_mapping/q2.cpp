#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

// Time and Space complexity
// TC: O(N)
// SC: O(100000)

/* Q1: Find number of pairs (i,j) where arr[i] == arr[j];
arr = [2,4,2,3,3,2]
pairs = {{0,2},{0,5},{2,5},{3,4}}
*/

// nC2 = n!/2!*(n-2)! -> (n) * (n-1) * (n-2)! / 2! * (n-2)! -> (n * n - 1) / 2;
int nC2(int n)
{
    return (n * (n - 1)) / 2;
}
void solve()
{
    // Intution: we need same value pairs placed at different indexes i.e. nC2 as we need pairs of size 2

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> freq(100000, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int countPairs = 0;
    for (int i = 0; i < 100000; i++)
    {
        countPairs = countPairs + nC2(freq[i]);
    }
    cout << countPairs << endl;
    ;
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