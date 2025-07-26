#include<bits/stdc++.h>
using namespace std;
vector<int> altman2sumopt(vector<int>&nums,int target){
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int complement=target-nums[i];
        if(mp.find(complement)!=mp.end()){
            ans.push_back(mp[complement]);
            ans.push_back(i);
        }
        else {
            mp[nums[i]]=i;
        }
        
    }
    if(!ans.empty()) return ans;
    else return {-1,-1};
}

int main() {
  vector<int> nums={1,2,3,4,5};
  int target=7;
    vector<int> ans=altman2sumopt(nums,target);
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}

