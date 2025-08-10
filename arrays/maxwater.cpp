#include<bits/stdc++.h>
using namespace std;
int maxwater(vector<int>&vec){
    int sz=vec.size();
 int left=0,right=sz-1,minht=INT_MAX,maxwater=INT_MIN;
     while(left<right){
        minht=min(vec[left],vec[right]);
        maxwater=max(maxwater,(right-left)*minht);
        if(vec[left]<vec[right]) left++;
        else right--;
     }
    
     return maxwater;
}
int main() {
   vector<int> height={1,8,6,2,5,4,8,3,7};
  int res=maxwater(height);
  cout<<res;
    return 0;
}
