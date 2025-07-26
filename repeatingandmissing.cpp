#include<bits/stdc++.h>
using namespace std;
pair<int,int> altmanmap(vector<int> &nums){
    unordered_map<int,int> freq;
    int rep=-1,miss=-1;
    for(auto val:nums){
        freq[val]++;
    }
    for(int i=1;i<=nums.size();i++){
    if(freq[i]==0) miss=i;
    if(freq[i]==2) rep=i;
    }
    return{miss,rep};
    

}

int main() {
    vector<int> nums={1,2,3,4,4};
    pair<int,int> p=altmanmap(nums);
    cout<<"REPEATING IS-->>"<<p.second<<" MISING IS-->> "<<p.first;


    return 0;
}
