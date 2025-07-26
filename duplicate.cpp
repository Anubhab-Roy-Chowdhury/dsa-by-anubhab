#include<bits/stdc++.h>
using namespace std;
int altmandup(vector<int> &arr){
    int n=arr.size();
    set<int> seen;
    for(int val:arr){
        if(seen.find(val)!=seen.end()){
            return val;
        }
        seen.insert(val);
    }
}

int main() {
    vector<int> arr={1,2,3,4,4};
    int dup=altmandup(arr);
    cout<<"Duplicate is "<<dup;
    return 0;
}
