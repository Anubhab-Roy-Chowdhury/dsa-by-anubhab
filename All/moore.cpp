#include<bits/stdc++.h>
using namespace std;

int moore(vector<int>&vec){
    int sz=vec.size();
     int count=0,cand=vec[0];
    for(int i=0;i<sz;i++){
       if(cand==vec[i]){
        count++;
       }
       else count--;
       if(count==0) cand=vec[i],count=1;
     
    }
    count=0;
    for(int i=0;i<sz;i++){
       if(cand==vec[i]){
        count++;
       }
    }
    if(count>sz/2) return cand;
   else return -1;
}

int main() {
    vector<int> vec={3,3,4,2,4,4,2,4,4};
    int ans =moore(vec);
    cout<<ans;
    return 0;
}