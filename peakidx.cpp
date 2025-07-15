#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int peakidx(vector<int>&nums){
    int low=0,high=nums.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
       if(nums[mid]<nums[mid+1]){
        low=mid+1;
       }
       else high=mid;
       if(low==high) return low;
}
}

int main() {
   vector<int> nums={1,2,3,2,1};
   int res=peakidx(nums);
   cout<<res;
    return 0;
}
