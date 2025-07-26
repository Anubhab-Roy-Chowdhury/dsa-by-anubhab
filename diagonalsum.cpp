#include<bits/stdc++.h>
using namespace std;
int altmandsum(vector<vector<int>> &nums){
    int rows=nums.size(),cols=nums[0].size(),sum=0;
    if(rows!=cols) return -1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j || i+j==rows-1){
                sum+=nums[i][j];
            }
        }
    }
    //if(rows%2!=0) sum-=nums[rows/2][rows/2];
    return sum;

}

int main() {
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    int ans =altmandsum(nums);
    cout<<ans;
    return 0;
}
