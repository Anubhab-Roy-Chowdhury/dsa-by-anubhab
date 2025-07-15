#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>&vec,int mid,int n){
    int cand=1,count=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>mid) return false;
        if (count+vec[i]<=mid){
            count+=vec[i];
        }
        else{cand++,count=vec[i];
            if(cand>n ) return false;
        } 
        }
        return true;
    

}
int maxpages(vector<int>&vec,int n){
    int low=*max_element(vec.begin(),vec.end()),high=accumulate(vec.begin(),vec.end(),0),ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(ispossible(vec,mid,n)) {
            ans=mid;
            high =mid-1;
        }
       else  low=mid+1;
    }
    return ans;

}

int main() {
int n=2;
vector<int> vec={12,34,67,90};
int ans = maxpages(vec,2);
cout<<ans;
    return 0;
}