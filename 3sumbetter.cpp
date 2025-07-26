#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threesumbetter(vector<int> &arr){
    int n=arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
for(int i=0;i<n-2;i++){
     if (i > 0 && arr[i] == arr[i - 1])
            continue;
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=arr[i]+arr[left]+arr[right];
                if(sum<0 ){
                    
                    left++;
                }
                else if(sum>0){

                    right--;
                }
                else {
                    vector<int> triplet={arr[i],arr[left],arr[right]};
                    ans.push_back(triplet);
                    while(left<right && arr[left]==arr[left+1]) left++;
                    while(left<right && arr[right]==arr[right-1]) right--;
                    left++;
                    right--;
                
                }
                }
                }
                return ans;
            }


int main() {
vector<int> arr={-1, 0, 1, 2, -1, -4};
vector<vector<int>> ans=threesumbetter(arr);
   for(auto triplet : ans){
    for(int num : triplet){
        cout << num << " ";
    }
    cout << endl;
}

    return 0;
}