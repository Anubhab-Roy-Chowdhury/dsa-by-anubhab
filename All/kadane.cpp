#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int maxxsum(vector<int> &vec){
    int maxsum=INT_MIN,currsum=0;
    for(int i=0;i<vec.size();i++){
        currsum +=vec[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;

}


int main() {
    vector<int> vec={1,2,3,4};
    int ans=maxxsum(vec);
    cout<<ans;
    return 0;
}