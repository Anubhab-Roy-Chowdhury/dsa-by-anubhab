#include<bits/stdc++.h>
using namespace std;
void nextper(vector<int>& nums){
    int i=nums.size()-2;
    while(i>=0 && nums[i]>nums[i+1]) i--;
    if(i>=0){
        int j=nums.size()-1;
        while(nums[j]<=nums[i]){
            j--;
            
        }
        swap(nums[i],nums[j]);
        

    }
    reverse(nums.begin()+i+1,nums.end());
}

int main() {
    vector<int> nums ={1,2,3};
    nextper(nums);
    for(int val : nums)
    cout<< val <<" ";
    return 0;
}