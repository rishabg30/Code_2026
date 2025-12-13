#include<bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"


// Time and Space complexity
// TC: O(N)
// SC: O(1)


void reverse_arr(vector<int>&arr, int si, int ei) {
	while (si <= ei) {
		swap(arr[si], arr[ei]);
		si++;
		ei--;
	}
}

void solve() {
	int n, r; cin >> n >> r;
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Right rotate = N - Left rotate
	r = r % n;
	r = n - r;

	// Reverse [0, r)
	// Reverse [r+1, n-1]
	// Reverse [0, n-1]

	reverse_arr(arr, 0, r - 1);
	reverse_arr(arr, r, n - 1);
	reverse_arr(arr, 0, n - 1);


	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
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