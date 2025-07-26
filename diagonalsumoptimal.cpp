#include<bits/stdc++.h>
using namespace std;
int altmandopsum(vector<vector<int>> &nums){
    int rows=nums.size(),cols=nums[0].size(),sum=0;
    int n=rows;
    if(rows!=cols) return -1;
    for(int i=0;i<n;i++){
     sum+=nums[i][i];
    sum+=nums[i][n-i-1];
    }
    if(rows%2!=0) sum-=nums[rows/2][rows/2];
    return sum;

}

int main() {
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    int ans =altmandopsum(nums);
    cout<<ans;
    return 0;
}