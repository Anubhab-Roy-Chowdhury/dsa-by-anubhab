#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threesumbruteforce(vector<int> &arr){
    set<vector<int>> ans;
    int n=arr.size();
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-1;j++){
            for(int k=0;k<n;k++){
                if((i!=j) && (j!=k) && (i!=k) && arr[i]+arr[j]+arr[k]==0){
                    vector<int> trip={arr[i],arr[j],arr[k]};
                    sort(trip.begin(),trip.end());
                    ans.insert(trip);
                }     
                   }
        }
    }
    vector<vector<int>> ans2(ans.begin(),ans.end());
    return ans2;
}

int main() {
   vector<int> arr={-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans=threesumbruteforce(arr);
   for(auto triplet : ans){
    for(int num : triplet){
        cout << num << " ";
    }
    cout << endl;
}

    return 0;
}