#include<bits/stdc++.h>
using namespace std;
vector<int> altmanspiral(vector<vector<int>> &matrix){
    int rows=matrix.size(),cols=matrix[0].size();
    vector<int> ans;
   int top=0,bottom=rows-1,left=0,right=cols-1;
   while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
        ans.push_back(matrix[top][i]);
    }
     top++;
    for(int i=top;i<=bottom;i++){
        ans.push_back(matrix[i][right]);
    
   }
   right--;
   for(int i=right;i>=left;i--){
    ans.push_back(matrix[bottom][i]);
    
   }
   bottom--;
   for(int i=bottom;i>=top;i--){
    ans.push_back(matrix[i][left]);
   
   }
    left++;
   }
   return ans;
   }
int main() {
    vector<vector<int>> matrix={{1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};
    vector<int> ans =altmanspiral(matrix);
    for (int val:ans){
        cout<<val<<" ->";
    }
    return 0;
}
