#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>&vec,int mid,int k){
    int dist =vec[0],count=1;
    for(int i=0;i<vec.size();i++){
        if(vec[i]-dist>=mid){
            count++;dist=vec[i];
        }
    }
    return count>=k;
}
int dischecker(vector<int>&vec,int k){
sort(vec.begin(),vec.end());
int n=vec.size();
int ans=-1,low=1,high=vec[n-1]-vec[0];
while(low<=high){
    int mid=low+(high-low)/2;
    if(ispossible(vec,mid,k)){
        ans = mid;
        low= mid+1;
    }
    else{
        high=mid-1;
    }
}
return ans;
}

int main() {
    vector<int>vec={1,2,4,8,9};;
    int result=dischecker(vec,3);
    cout<<result;
    return 0;
}