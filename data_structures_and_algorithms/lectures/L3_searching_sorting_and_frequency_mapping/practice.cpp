#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        int j = i - 1, temp = arr[i];
        while (j >= 0 && arr[j] > temp)
        {
            swap(arr[j], arr[j + 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
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