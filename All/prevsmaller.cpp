#include<bits/stdc++.h>
using namespace std;
vector<int> altmannext(vector<int> & nums){
    int n=nums.size();
    vector < int > ans(n,0);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(st.size()>0 && nums[st.top()]>=nums[i]){
            st.pop();
        
        }
        ans[i]=st.empty()?-1:nums[st.top()];
        st.push(i);

    }
    return ans;
}

int main() {
   vector<int> nums={6,8,0,1,3};
   vector <int> ans=altmannext(nums);
   for(int val:ans){
   cout<<val<<" ";
   }
    return 0;
}