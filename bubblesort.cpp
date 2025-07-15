#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&nums){
    int sz=nums.size();
    bool flag=false;
    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
               flag=true;
            }
            
        }
        if(!flag) break;
    }
}

int main() {
    vector<int> nums={1,8,3,5,2,4,9};
    bubblesort(nums);
    for(int val:nums)
        cout<< val<<" ";
        return 0;
}