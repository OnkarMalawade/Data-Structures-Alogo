#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(int arr[], int n, int k)
{
	int j = 0, i = k;

	// Reverse subarrays of size k until the end of the array is reached
	while (i < n) {
		// Reverse the subarray from arr[j] to arr[i-1]
		reverse(arr + j, arr + i);

		// Move to the next subarray of size k
		i += k;
		j += k;
	}

	// Reverse the remaining subarray of size less than k
	reverse(arr + j, arr + n);
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int k = 3;

	int n = sizeof(arr) / sizeof(arr[0]);

	// Reverse subarrays of size k in the array
	reverse(arr, n, k);

	// Print the reversed array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
