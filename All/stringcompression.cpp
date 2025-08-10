#include<bits/stdc++.h>
using namespace std;
int compressed(vector<char> &chars){
    int i=0,write=0;
    while(i<chars.size()){
        char curr=chars[i];
        int count=0;
        while(i<chars.size() && chars[i]==curr){
            count++,i++;
        }
        chars[write++]=curr;
        if(count>1){
            string cnt=to_string(count);
            for(char c:cnt){
                chars[write++]=c;
            }
        }
    }
    return write;
}

int main() {
    vector<char> chars={'a','a','a','a','b','b','c'};
  
    int len=compressed(chars);
    cout<<len<<endl;
    for(int i=0;i<len;i++){
        cout<<chars[i]<<" ";
    }
    return 0;
}