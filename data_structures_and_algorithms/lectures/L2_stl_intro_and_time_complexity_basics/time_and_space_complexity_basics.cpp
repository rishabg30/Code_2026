#include<bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"


// Time and Space complexity
// TC: O(N)
// SC: O(1)
int sumElements(int arr[], int n) {
	int totalSum = 0;
	for (int i = 0; i < n; i++) {
		totalSum += arr[i];
	}
	return totalSum;
}

// Time and Space complexity
// TC: O(N^2)
// SC: O(1)
void printPairs(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
		}
	}
}

// Time and Space complexity
// TC: O(N)
// SC: O(1)
int firstFirstEven(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % n == 0 ) {
			return arr[i];
		}
	}
	return -1;
}


// Time and Space complexity
// TC: O(logN)
// SC: O(1)
void doublingLoop(int n) {
	for (int i = 1; i < n; i *= 2) {
		cout << "Iteration with i = " << i << endl;
	}
}

// Time and Space complexity
// TC: O(N^2)
// SC: O(1)
int pairProductSum(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((arr[i] + arr[j]) % 2 == 0) {
				sum += (arr[i] * arr[j]);
			}
		}
	}
	return sum;
}

// Time and Space complexity
// TC: O(N*logN)
// SC: O(1)
void ABC(int n) {
	for (int i = 1; i < n; i *= 2) {
		for (int j = 0; j < n; j++) {

		}
	}
}

// Time and Space complexity
// TC: O(NlogN + NlogM)
// SC: O(1)
void ABC(int n) {
	for (int i = 1; i < n; i *= 2) {
		for (int j = 0; j < n; j++) {

		}
	}
}

for (int i = 1; i < m; i *= 2) {
	for (int j = 0; j < n; j++) {

	}
}

// Time and Space complexity
// TC: O(NlogN)
// SC: O(1)
void ABC(int n) {
	for (int i = n; i >= 1; i /= 2) {
		for (int j = 0; j < i; j++) {
			count++;
		}
	}
	return count;
}

void solve() {

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