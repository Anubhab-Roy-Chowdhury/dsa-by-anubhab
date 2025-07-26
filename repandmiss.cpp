#include<bits/stdc++.h>
using namespace std;
vector<int> altmanfind(vector<vector<int>> &grid){
    vector<int> flat;
    int rows=grid.size(),cols=grid[0].size();
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            flat.push_back(grid[i][j]);
        }
    }
    vector<int> ans(2);
    int n=rows*cols;
    vector<int> freq(n+1,0);
    for(int i=0;i<flat.size();i++){
        freq[flat[i]]++;
    }
    for(int i=1;i<freq.size();i++){
        if(freq[i]==0) ans[0]=i;
        if(freq[i]==2) ans[1]=i;
    }
    return ans;
}


int main() {
    vector<vector<int>> grid = {
    {1, 2},
    {2, 4}
};
    vector<int> ans=altmanfind(grid);
     for(int val:ans){
        cout<<val<<" ";
     }
    return 0;
}
