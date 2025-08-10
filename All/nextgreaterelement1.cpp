#include <bits/stdc++.h>
using namespace std;

vector<int> altmannext(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp;  // num -> next greater
    stack<int> st;

   
    for (int i = nums2.size() - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }
        mp[nums2[i]] = st.empty() ? -1 : st.top();
        st.push(nums2[i]);
    }

  
    vector<int> ans;
    for (int num : nums1) {
        ans.push_back(mp[num]);
    }

    return ans;
}

int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 4, 3, 2};
    vector<int> ans = altmannext(nums1, nums2);

    for (int val : ans) {
        cout << val << " ";
    }
    return 0;
}
