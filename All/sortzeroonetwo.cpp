#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int>&vec){
    int n=vec.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(vec[mid]==0){
            swap(vec[mid],vec[low]);
            low++,mid++;
        }
        else if(vec[mid]==2){
            swap(vec[mid],vec[high]);
            high--;
        }
        else {
            mid++;
        }
    }
}

int main() {
      vector<int> vec={2,1,0,1,0,2,1,1,0};
      sort012(vec);
      for(int val:vec)
      cout<< val << " ";
    return 0;
}