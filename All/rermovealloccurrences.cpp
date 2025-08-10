#include<bits/stdc++.h>
using namespace std;
void removeoccur(string &s,string &y){
  while(s.find("y")!=string::npos){
    size_t pos=s.find(y);
    s.erase(pos,y.length());
  }
  
}
int main() {
    string s="abcxyzxyzxyzxxxxxxxxabc";
    string y="xyz";
    removeoccur(s,y);
    cout<<s;
    return 0;
}