#include<bits/stdc++.h>
using namespace std;
vector<int> altman2sum(vector<int>&nums,int target){
    vector<int> ans;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
         if(nums[i]+nums[j]==target){
           ans.push_back(i);
            ans.push_back(j);
         //ans[0]=i;
         // ans[1]=j;
           // return ans;
         }
        }
        
    }
    //return ans;
    if(!ans.empty()) return ans;
    else return {-1,-1};
    
    }

int main() {
   vector<int> nums={1,2,3,4,6};
   vector<int> ans=altman2sum(nums,7);
   for(int val:ans){
        cout<<val<<" ";
   }
     return 0;
}
