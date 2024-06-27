
// C++ program to find the ratio of positive,
// negative, and zero elements in the array.
#include<bits/stdc++.h>
using namespace std;


// Function to find the ratio of
// positive, negative, and zero elements
void positiveNegativeZero(int arr[], int len)
{
	// Initialize the positiveCount, negativeCount, and
	// zeroCountby 0 which will count the total number
	// of positive, negative and zero elements
	float positiveCount = 0;
	float negativeCount = 0;
	float zeroCount = 0;

	// Traverse the array and count the total number of
	// positive, negative, and zero elements.
	for (int i = 0; i < len; i++) {
		if (arr[i] > 0) {
			positiveCount++;
		}
		else if (arr[i] < 0) {
			negativeCount++;
		}
		else if (arr[i] == 0) {
			zeroCount++;
		}
	}

	// Print the ratio of positive,
	// negative, and zero elements
	// in the array up to four decimal places.
	cout << fixed << setprecision(4) << (positiveCount / len)<<" ";
	cout << fixed << setprecision(4) << (negativeCount / len)<<" ";
	cout << fixed << setprecision(4) << (zeroCount / len);
	cout << endl;
}

// Driver Code.
int main()
{
	// Test Case 1:
	int a1[] = {-4, 3, -9, 0, 4, 1};
	int len=sizeof(a1)/sizeof(a1[0]);
	positiveNegativeZero(a1,len);

	// Test Case 2:
	int a2[] = { 4, 0, -2, -9, -7, 1 };
	len=sizeof(a2)/sizeof(a2[0]);
	positiveNegativeZero(a2,len);
}

// This code is contributed by chitranayal

