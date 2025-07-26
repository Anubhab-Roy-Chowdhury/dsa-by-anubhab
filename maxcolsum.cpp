#include<bits/stdc++.h>
using namespace std;
vector<int> altmansum(vector<vector<int>> &nums){
 vector <int> ans(2,-1);
 int rows=nums.size(),cols=nums[0].size(),maxsum=INT_MIN;
  for(int i=0;i<cols;i++){
    int sum=0;
    for(int j=0;j<rows;j++){
        sum+=nums[j][i];
        
    }
    if(sum>maxsum){
        maxsum=sum;
        ans[0]=i;
       
    }
  }
  ans[1]=maxsum;
  return ans;
}
    

int main() {
      vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
      vector<int> ans=altmansum(nums);
      for(int val:ans)
      cout<<val<<" ";
      
      
      return 0;
}