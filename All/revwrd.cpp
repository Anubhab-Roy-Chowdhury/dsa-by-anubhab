#include<bits/stdc++.h>
using namespace std;
string cleanspaces(string &s){
    int i=0,n=s.length();
    string temp;
    while(i<n && s[i]!=' ') {
        i++;
    }
    while(i<n){
        if(s[i]!=' '){
            temp+=s[i];
        }
        else if(!temp.empty() &&temp.back()!=' '){
            temp+=' ';
        }
        i++;
    }
    if(!temp.empty() &&temp.back()==' '){
        temp.pop_back();
    }
    return temp;
}
vector<string> splitwords(string &s){
    vector<string> words;
    string word;
    for(char c: s ){
        if(c==' '){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
            }
        }
        else{
            word+=c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}
string joinbyreversed(vector<string> &s){
    reverse(s.begin(),s.end());
    string res;
    for(int i=0;i<s.size();i++){
        res+=s[i];
        if(i!=s.size()-1) res+= ' ';
    }
    return res;
}
 string stringrevmain(string &s){
        string cleaned=cleanspaces(s);
        vector<string> words=splitwords(cleaned);
        string ans= joinbyreversed(words);
    
    return ans;
 }
int main() {
   string s="       i love          c++";
   string ans =stringrevmain(s);
    cout<<ans;
    return 0;
}