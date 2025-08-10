
// Brute-force solution to the 3Sum problem
// Finds all unique triplets in the array that sum to zero
#include <bits/stdc++.h>
using namespace std;

// Returns a vector of unique triplets that sum to zero
vector<vector<int>> threesumbruteforce(vector<int> &arr) {
	set<vector<int>> ans; // To store unique triplets
	int n = arr.size();
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < n - 1; j++) {
			for (int k = 0; k < n; k++) {
				// Ensure all indices are different and sum is zero
				if ((i != j) && (j != k) && (i != k) && arr[i] + arr[j] + arr[k] == 0) {
					vector<int> trip = {arr[i], arr[j], arr[k]};
					sort(trip.begin(), trip.end()); // Sort to avoid duplicate triplets
					ans.insert(trip);
				}
			}
		}
	}
	// Convert set to vector for output
	vector<vector<int>> ans2(ans.begin(), ans.end());
	return ans2;
}

int main() {
	// Example usage
	vector<int> arr = {-1, 0, 1, 2, -1, -4};
	vector<vector<int>> ans = threesumbruteforce(arr);
	for (auto triplet : ans) {
		for (int num : triplet) {
			cout << num << " ";
		}
		cout << endl;
	}
	// Output: All unique triplets that sum to zero
	return 0;
}
