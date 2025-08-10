#include<bits/stdc++.h>
using namespace std;
int searchres(vector<int> &vec,int key){
    int low=0,high=vec.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(vec[mid]==key) return mid;
       else{
           if(vec[low]<=vec[mid]){
            if(vec[low]<=key && key<vec[mid]){
                high=mid-1;
            }else{ low=mid+1;}
           
           }
            
            if(vec[mid]<key && key<=vec[high]){
                low=mid+1;
            }
          else{high=mid-1;} 
           

        }
    }
    return -1;
}

int main() {
    vector<int>vec ={6,7,8,1,2,3,4};
    int result =searchres(vec,4);
    cout<<result;
    return 0;
}