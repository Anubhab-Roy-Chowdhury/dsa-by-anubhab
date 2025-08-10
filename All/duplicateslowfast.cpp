#include<bits/stdc++.h>
using namespace std;
int altmanfind(vector<int> &arr){
    int n=arr.size();
    int slow=arr[0],fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);
    slow=arr[0];
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
    }

int main() {
    vector<int> arr={1,2,3,4,4};
    int ans = altmanfind(arr);
    cout<<"THE DUPLICATE IS-->>"<<ans;
    return 0;
}