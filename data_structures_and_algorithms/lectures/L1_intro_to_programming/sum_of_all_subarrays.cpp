#include<bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"


// Time and Space complexity
// TC: O(N)
// SC: O(1)


void solve() {
	int n; cin >> n;
	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int totalSum = 0;
	for (int i = 0; i < n; i++) {
		totalSum = totalSum + (arr[i] * (i + 1) * (n - i));
	}
	cout << totalSum << endl;
}

signed main() {
	// Used for fast_io_stream
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int testCase = 1;
	// cin >> testCase;
	while (testCase--) {
		solve();
	}
}