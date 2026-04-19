#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;


bool isPrime(int num){
    int cnt = 0;
    for(int i=2; i*i<=num; ++i){
        if(num%i == 0) cnt++;
    }

    return cnt==0?true:false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    
    if(!isPrime(m)) {
        cout<<"NO";
    }
    else{
        bool nextPrime = true;
        for(int i=n+1; i<m; ++i){
            if(isPrime(i)) {
                nextPrime = false;
                break;
            }
        }
        if(nextPrime) cout<<"YES";
        else cout<<"NO";
    }
  
}