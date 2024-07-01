// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;

// Function for finding
// longest alternating
// subsequence
int LAS(int arr[], int n)
{

	// "inc" and "dec" initialized as 1
	// as single element is still LAS
	int inc = 1;
	int dec = 1;

	// Iterate from second element
	for (int i = 1; i < n; i++) {

		if (arr[i] > arr[i - 1]) {

			// "inc" changes if "dec"
			// changes
			inc = dec + 1;
		}

		else if (arr[i] < arr[i - 1]) {

			// "dec" changes if "inc"
			// changes
			dec = inc + 1;
		}
	}

	// Return the maximum length
	return max(inc, dec);
}

// Driver Code
int main()
{
	int arr[] = { 10, 22, 9, 33, 49, 50, 31, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	cout << LAS(arr, n) << endl;
	return 0;
}

