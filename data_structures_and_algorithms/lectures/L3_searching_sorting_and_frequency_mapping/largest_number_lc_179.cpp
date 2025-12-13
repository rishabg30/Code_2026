#include<bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"


// Time and Space complexity
// TC: O(N)
// SC: O(1)

static bool cmp (string a, string b) {
	return a + b > b + a;
}
string largestNumber(vector<int>& nums) {

	int n = nums.size();
	vector<string>arr(n);
	for (int i = 0; i < n; i++) {
		arr[i] = to_string(nums[i]);
	}
	string ans;
	sort(arr.begin(), arr.end(), cmp);
	if (arr[0] == "0")return arr[0];
	for (int i = 0; i < arr.size(); i++) {
		ans += (arr[i]);
	}
	return ans;
}
void solve() {
	vector<int>v = {3, 30, 34, 5, 9};
	string ans = largestNumber(v);
	cout << ans;
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