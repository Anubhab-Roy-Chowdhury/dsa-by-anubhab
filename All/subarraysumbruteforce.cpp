#include<bits/stdc++.h>
using namespace std;
int altmansubarraysum(vector<int> &arr,int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];
            if(currsum==k) count++;
            //if(currsum>k) break;
        }
   
    }
    return count;
}

int main() {
   vector<int> arr={1,2,3};
   int k=3;
   int ans =altmansubarraysum(arr,k);
   cout<<"THE ANS IS -->"<<ans;
    return 0;
}
