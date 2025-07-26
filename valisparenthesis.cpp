#include<bits/stdc++.h>
using namespace std;
bool altmanvalid(string &s){
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='('|| s[i]=='{'|| s[i]=='['){
            st.push(s[i]);
        }
        
        else{
            if((st.empty())){
             return false;
            }
            
            if(s[i]==')' && st.top()!='('){
                return false;
            }
                
             
                if(s[i]=='}' && st.top()!='{'){
               return false;
              
            } 
                if(s[i]==']' && st.top()!='['){
             return false;
            } 
           st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s="({[]})";
    bool ans = altmanvalid(s);
    if(ans){
        cout<<"THE SEQUENCE IS VALID";
    }
    else{
        cout<<"THE SEQUENCE IS INVALID";
    }
    return 0;
}
