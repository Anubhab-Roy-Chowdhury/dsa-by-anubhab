#include<bits/stdc++.h>
using namespace std;



 bool validpalindrom(string &s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(i<j && !isalnum(s[i])) i ++;
        else if(i<j && !isalnum(s[j])) j--;
        if(tolower(s[i])==tolower(s[j])){
            i++;j--;
        }
        else {
            return false;
    }
    return true;
 }
}

int main(){
   string s="AKa"; 
 
   if(validpalindrom(s)){
    cout<<"TRUE";
   }
   else{
    cout<<"FALSE";
   }
    return 0;
}