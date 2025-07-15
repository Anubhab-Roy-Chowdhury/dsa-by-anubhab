#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&vec){
    int sz=vec.size();
    for(int i=0;i<sz-1;i++){
    int minidx=i;
    for(int j=i+1;j<sz;j++){
        if(vec[j]<vec[minidx]){
            minidx=j;
        }
        if(i!=minidx){
            swap(vec[i],vec[minidx]);
        }
    }
    }
}

int main() {
    vector<int>vec={2,1,4,7};
    selectionsort(vec);
    for(int val:vec)
    cout<<val<<" ";
    return 0;
}