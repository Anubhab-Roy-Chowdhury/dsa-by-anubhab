#include<bits/stdc++.h>
using namespace std;
bool altmanbinary(vector<vector<int>> &nums,int target){
    int rows=nums.size(),cols=nums[0].size();
    int row=0,col=cols-1;
    while(row<rows && col>=0){
        if(nums[row][col]==target) return true;
        else if(nums[row][col]<target) row++;
        else col--;
      
    }
    return false;
}

int main() {
    vector<vector<int>> nums = {
  {1,  4,  7, 11, 15},
  {2,  5,  8, 12, 19},
  {3,  6,  9, 16, 22},
  {10,13, 14,17, 24},
  {18,21, 23,26, 30}
};;
    int target=50;
    bool ans=altmanbinary(nums,target);
    if(ans) cout<<"FOUND";
    else cout<<"NOT FOUND ";
    return 0;
}