#include<bits/stdc++.h>
using namespace std;
// Finds the next lexicographical permutation of the string
void nextper(string &nums){
    int i=nums.size()-2;
    while(i>=0 && nums[i]>nums[i+1]) i--;
    if(i>=0){
        int j=nums.size()-1;
        while(nums[j]<=nums[i]){
            j--;
            
        }
        swap(nums[i],nums[j]);
        

    }
    reverse(nums.begin()+i+1,nums.end());
}

int main() {
    string s="acbd";
    nextper(s);
    cout<<s;
    return 0;
}
