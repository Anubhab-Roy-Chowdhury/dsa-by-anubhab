#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int buyandsell(vector<int>&vec){
    int sz=vec.size();
    int minprice=INT_MAX,maxprofit=0;
    for(int i=0;i<sz;i++){
   minprice=min(minprice,vec[i]);
       maxprofit=max(maxprofit,vec[i]-minprice);
    }
    return maxprofit;
}
int main() {
  vector<int> prices={7,1,5,3,6,4};
  int res=buyandsell(prices);
  cout<<res;
    return 0;
}