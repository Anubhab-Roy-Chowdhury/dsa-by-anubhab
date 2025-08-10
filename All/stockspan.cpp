#include<bits/stdc++.h>
using namespace std;
vector<int> calculatespan(vector<int>& price){
    vector<int> ans;
    stack <int> s;
    int n=price.size();
    for(int i=0;i<n;i++){
        if(s.empty()){
            ans.push_back(i+1);
            s.push(i);
        }
        else{
            while(!s.empty() && price[i]>=price[s.top()]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(i+1);
                s.push(i);
            }
            else{
                ans.push_back(i-s.top());
                s.push(i);
            }
        }
    }
    return ans;
}

int main() {
   vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> result = calculatespan(price);

    cout << "Span values:\n";
    for (int i : result)
        cout << i << " ";

    return 0;
}
