#include<bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"


// Time and Space complexity
// TC: O(N)
// SC: O(1)

/*
Q1: Given an array, find:
1. Min element in the array
2. Last index where Min element is present
3. First index where Min element is present
4. Count frequency of Min element in array

Restriction: only use one loop
*/
void solve() {
	int n; cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int min_element = 1e9, first_index = -1, last_index = -1, freq = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min_element) {
			min_element = arr[i];
			first_index = i;
			last_index = i;
			freq = 1;
		}
		else if (arr[i] == min_element) {
			last_index = i;
			freq++;
		}
		else {
			continue;
		}
	}
	cout << min_element << " " << first_index << " " << last_index << " " << freq << endl;
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