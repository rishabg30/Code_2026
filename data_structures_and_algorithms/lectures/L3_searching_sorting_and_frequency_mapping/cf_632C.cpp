#include<bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"


// Time and Space complexity
// TC: O(NlogN)
// SC: O(1)

bool cmp(string s1, string s2) {
	return s1 + s2 < s2 + s1;
}
void solve() {

	int n; cin >> n;
	vector<string>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
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