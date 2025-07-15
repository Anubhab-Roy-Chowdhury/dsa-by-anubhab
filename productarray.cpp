#include<bits/stdc++.h>
using namespace std;
vector<int> pdtarr(vector<int>&ip){
    vector<int> res(ip.size(),1);
    int n=ip.size();
    int lp=1;
    for(int i=0;i<n;i++){
        res[i]=lp;
        lp*=ip[i];
    }
    int rp=1;
    for(int i=n-1;i>=0;i--){
        res[i]*=rp;
        rp*=ip[i];
    }
    return res;
}



int main() {
vector<int> ip={1,2,3,4};
 vector<int> ans =pdtarr(ip);
 for(int val:ans)
    cout<<val<<" ";
 

return 0;
}