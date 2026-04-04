#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    vector<bool> sieve(150000, true);
    sieve[0] = sieve[1] = false;

    for(int i=2; i*i<150000; ++i){
        if(sieve[i]){
            for(int j=i*i; j<150000; j+=i){
                sieve[j] = false;
            }
        }
    }
    vector<int> primes;

    for(int i=0; i<150000; ++i){
        if(sieve[i]) {
            primes.push_back(i);
        }
    }

    while(tc--){
        ll n; cin>>n;
        
        
        for(int i=0; i<n; ++i){
            cout<<(ll)primes[i]*primes[i+1]<<" ";
        }
        cout<<nl;
    }      
  
}