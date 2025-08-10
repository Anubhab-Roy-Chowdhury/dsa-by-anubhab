
// Find the repeating and missing number in an array using hashing
#include <bits/stdc++.h>
using namespace std;

// Returns a pair: {missing, repeating}
pair<int, int> altmanmap(vector<int> &nums) {
	unordered_map<int, int> freq; // To count frequency of each number
	int rep = -1, miss = -1;
	for (auto val : nums) {
		freq[val]++;
	}
	// Check which number is missing and which is repeating
	for (int i = 1; i <= nums.size(); i++) {
		if (freq[i] == 0) miss = i;
		if (freq[i] == 2) rep = i;
	}
	return {miss, rep};
}

int main() {
	// Example usage
	vector<int> nums = {1, 2, 3, 4, 4};
	pair<int, int> p = altmanmap(nums);
	cout << "REPEATING IS-->>" << p.second << " MISSING IS-->> " << p.first;
	// Output: REPEATING IS-->>4 MISSING IS-->> 5
	return 0;
}
