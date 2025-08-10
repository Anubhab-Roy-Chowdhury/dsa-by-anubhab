#include<bits/stdc++.h>
using namespace std;
int mybinary(vector<int> &nums,int complement,int pos,int end ){
    int low=pos,high=end;
   
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==complement){
            return mid;
        }
      else if(nums[mid]>complement) high=mid-1;
      else low=mid+1;
    }
    return -1;
}
vector<int> altmanbetter2sum(vector<int>&nums,int target){
    vector<int> ans;
    int n=nums.size()-1;
    for(int i=0;i<n;i++){
        int complement=target-nums[i];
        int j=mybinary(nums,complement,i+1,n);
        if(j!=-1){
            ans.push_back(i);
            ans.push_back(j);      
          }
    //return ans;
    }
    if(ans.empty()) return{-1,-1};
    else 
    return ans;
    

}

int main() {
    vector<int> nums={1,2,3,4,5};
    sort(nums.begin(),nums.end());
    int target=7;
    vector<int> ans =altmanbetter2sum(nums,target);
     for(int val:ans){
        cout<<val<<" ";
     }
    return 0;
}
