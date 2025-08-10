#include<bits/stdc++.h>
using namespace std;
bool issub(string &s1,string &s2){
  if(s2.length()>s1.length()){
    return false;
  }
  int freq1[26]={0};
  int freq2[26]={0};
}

int main() {
    string s1="anubhab",s2="bhab";
    if(issub(s1,s2)) cout<<"EXISTS";
    else cout<<" DOESN'T EXISTS";
    return 0;
}