#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr1,vector<int> &arr2){
    int i=arr1.size()-arr2.size()-1,j=arr2.size()-1,k=arr1.size()-1;
    while(i>=0 && j>=0){
        if(arr1[i]<arr2[j]){
            arr1[k--]=arr2[j--];
        }
        else arr1[k--]=arr1[i--];
    }
    if(j>=0) arr1[k--]=arr1[j--];
}

int main() {
    vector<int> arr1={1,2,3,0,0,0,0};
     vector<int> arr2={4,5,6,7};
     merge(arr1,arr2);
     for(int val:arr1)
     cout<<val<<" ";

    
    return 0;
}
