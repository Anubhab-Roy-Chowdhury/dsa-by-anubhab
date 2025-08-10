#include<bits/stdc++.h>
using namespace std;
// Linear search for a key in a 2D matrix
pair<int,int> altmanlin(vector<vector<int>> &nums,int key){
    pair<int,int> ans;
    ans.first=-1,ans.second=-1;
int rows=nums.size(),cols=nums[0].size();
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(nums[i][j]==key){
                ans.first=i;
                ans.second=j;
                return ans;
            } //return true;
        }
     }
     return ans;
}

int main() {
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    pair<int,int> ans=altmanlin(nums,1);
    cout<<"ROW AND COL IS "<<ans.first<<" "<<ans.second;

    return 0;
}
