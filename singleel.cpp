#include<bits/stdc++.h>
using namespace std;
int singleel(vector<int> &vec){
    int low=0,high=vec.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(mid%2==1) mid--;
        if(vec[mid]==vec[mid+1]) low=mid+2;
        else high=mid;
    }
    return vec[low];
}

int main() {
    vector<int> vec={1,1,2,2,5};
    int singleelement=singleel(vec);
    cout<<singleelement;
    return 0;
}