#include<bits/stdc++.h>
using namespace std;
void primecheck(int n){
    vector<bool> isprime(n+1,true);
    isprime[0]=false,isprime[1]=false;
    for(int p=2;p*p<=n;p++){
        if(isprime[p]){
            for(int mul=p*p;mul<=n;mul+=p){
                isprime[mul]=false;
            }
        }
    }
     for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}

int main() {
    primecheck(50);
   
    return 0;
}