// C++ Program to find kth
// element from two sorted arrays
#include <bits/stdc++.h>
using namespace std;
// Function to find K-th min
int kth(int* a, int* b, int n, int m, int k)
{// Declaring a min heap
	priority_queue<int, vector<int>,greater<int> > pq;
// Pushing elements for
	// array a to min-heap
	for (int i = 0; i < n; i++) {
		pq.push(a[i]);
	}
// Pushing elements for
	// array b to min-heap
	for (int i = 0; i < m; i++) {
		pq.push(b[i]);
	}
	// Popping-out K-1 elements
	while (k-- > 1) {
		pq.pop();
	}
	return pq.top();
}//Driver Code
int main()
{
	int arr1[5] = {2, 3, 6, 7, 9};
	int arr2[4] = {1, 4, 8, 10};
	int k = 5;
	cout << kth(arr1, arr2, 5, 4, k);
	return 0;
}

// This code is contributed by yashbeersingh42

