#include <bits/stdc++.h>
using namespace std;

// typecasted for faster usage
#define int long long
#define endl "\n"

void solve()
{

	int arr[5];

	// STL Inbuilt algorithms

	// sort() algorithm
	sort(arr, arr + 5); // O(nlogN) = N = size of array
	/*
	 Here arr indicates iterator at the starting index of array inclusive and arr+5 represents iterator at 5th index which is exlusive.
	 Therefore exact sorting will happen at index (0,4)
	*/

	// reverse() algorithm
	reverse(arr, arr + 5); // O(n) = size of array
	/*
	  Similar working as sort does using iterators. Here arr indicates iterator at the starting index of array inclusive and
	  arr+5 represents iterator at 5th index which is exlusive.
	  Therefore exact reverse will happen at index (0,4)
	*/

	// next_permutation() algorithm
	vector<int> vec = {3, 2, 4, 1, 1};
	next_permutation(vec.begin(), vec.end());
	/*
	  Note: this gives us permutation greater than current in lexographical order. Therefore if array is not
	  sorted we can miss some permutations. Therefore recommended to sort array first to get all permutations
	*/

	// STL Inbuilt containers

	// 1. vector : dynamic array
	/*
	  push_back = O(1)
	  pop_back = O(1)
	  access element = O(1)
	  vec.size() = O(1)
	*/

	vector<int> vec;
	vec.push_back(1); // [1]
	vec.push_back(2); // [1, 2]
	// sort() algorithm used in vector
	sort(vec.begin(), vec.end()); // Here begin is the 0th index iterator and end is the (lastIndex+1)th iterator

	// 2. pair: <A, B>
	pair<int, int> p;
	p.first = 10;
	p.second = 20; // <10, 20>
	cout << p.first << " " << p.second << endl;

	// 3. stack : LIFO {Last in first out data structure}
	/*
	  push = O(1)
	  pop = O(1)
	  top = O(1)
	  size = O(1)
	*/
	stack<int> st;
	st.push(5);	 // {5}
	st.push(10); // {10, 5}
	st.push(25); // {25, 10, 5}
	st.pop();	 // {10, 5}
	while (st.size() != 0)
	{
		cout << st.top() << endl;
		st.pop();
	}

	// 4. queue : FIFO {First in first out data structure}
	/*
	  push = O(1)
	  pop = O(1)
	  front = O(1)
	  size = O(1)
	*/
	queue<int> q;
	q.push(3);				   // {3}
	q.push(5);				   // {3, 5}
	q.push(9);				   // {3, 5, 9}
	cout << q.front() << endl; // 3
	q.pop();				   // {5, 9}
	cout << q.front() << endl; // 5

	// 5. deque : {stack + queue combination} + capability to access element like vector
	/*
	  push_front = O(1)
	  push_back = O(1)
	  pop_front = O(1)
	  pop_back = O(1)
	  access_element = O(1)
	  size = O(1)
	*/

	deque<int> dq;
	dq.push_back(100);	   // {100}
	dq.push_front(200);	   // {200, 100}
	dq.push_back(500);	   // {200, 100, 500}
	cout << dq[1] << endl; // 100
	dq.pop_back();		   // {200, 100}
	cout << dq[1] << endl; // 100

	// 6. set : a kind of a container which has elements in sorted order, distinct elements, cannot access randomly. Uses RBT/BalanceBST's
	/*
	  find_element = O(logN) where N is number of distinct elements
	  insert_element = O(logN)
	  erase_element = O(logN)
	  size() = O(1)

	  Note: multiset : set which can have duplicate values.
			unordered_set : set which is not sorted.
	*/

	// 7. map : a kind of a container containinig {key, value} pairs. No same two keys can be present. It overrides the first value stored.
	//          - stores in increasing order
	/*
	  find_element = O(logN) where N is number of distinct elements
	  insert_element = O(logN)
	  erase_element = O(logN)
	  count = O(logN : Returns 1 if the key exists in the map, otherwise 0 )
	  size() = O(1)

	  Note : multimap : Multimap is an associative container similar to map, but it can have multiple elements with same keys.
			 unordered_map : unordered_map is an unordered associative container that stores data in the form of unique key-value pairs.
			 But unlike map, unordered map stores its elements using hashing.
			 This provides average constant-time complexity O(1) for search, insert, and delete operations
			 but the elements are not sorted in any particular order.
	*/

	// 8. priority_queue : it is similar to stack/queue data structure but it stores largest element at the top. Uses heap internally
	/*
	  push() = O(logN)
	  pop() = O(logN)
	  top() = O(1)
	  size() = O(1)

	  Note: For min-heap priority_queue to store smallest element at the top: priority_queue<int, vector<int>, greater<int>> pq;
	*/
}

signed main()
{
	// Used for fast_io_stream
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int testCase = 1;
	// cin >> testCase;
	while (testCase--)
	{
		solve();
	}
}