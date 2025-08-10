#include<bits/stdc++.h>
using namespace std;
// Insertion Sort: Builds the final sorted array one item at a time
void insertionsort(vector<int> &vec){
    int n=vec.size();
    for(int i=1;i<n;i++){
        int key=vec[i];
        int j=i-1;
        while(j>=0 && vec[j]>key){
            vec[j+1]=vec[j];
            j--;
        }
       vec[j+1]=key;
    }
}

int main() {
    vector<int> nums={1,8,3,5,2,4,9};
    insertionsort(nums);
    for(int val:nums)
        cout<< val<<" ";
        return 0;
}
