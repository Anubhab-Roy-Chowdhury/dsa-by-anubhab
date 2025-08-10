#include<bits/stdc++.h>
using namespace std;
// Binary search for a key in a 2D matrix (treats matrix as a 1D array)
bool altmanbinary(vector<vector<int>> &nums,int target){
    int rows=nums.size(),cols=nums[0].size();
    int low=0,high=rows*cols-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=mid/cols,col=mid%cols;
        if(nums[row][col]==target) return true;
        else if(nums[row][col]<target) low=mid+1;
        else high=mid-1;
    }
    return false;
}

int main() {
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    int target=5;
    bool ans=altmanbinary(nums,target);
    if(ans) cout<<"FOUND";
    else cout<<"NOT FOUND ";
    return 0;
}

