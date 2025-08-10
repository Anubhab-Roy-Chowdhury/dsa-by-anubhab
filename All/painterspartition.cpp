#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>&vec,int mid,int k){
    int ptrs=1,count=0;
    for(int i=0;i<vec.size();i++){
         if(vec[i]>mid) return false;
         if(count+vec[i]>mid){
            ptrs++,count=vec[i];
         
         }
         else{
            count+=vec[i];
         }
    }
       return ptrs <= k;
   
}
int partition(vector<int>&vec,int k){
    int low=*max_element(vec.begin(),vec.end()),high=accumulate(vec.begin(),vec.end(),0),ans=-1;
   
    while(low<=high){
    int mid=low+(high-low)/2;
        if(ispossible(vec,mid,k)){
            ans =mid;
            high=mid-1;
        }
        low=mid+1;
    }
    return ans;
}
int main() {
int n=2;
vector<int> vec={10,20,30,40};
int ans = partition(vec,2);

cout<<ans;
return 0;
}