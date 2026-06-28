#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n; cin>>n;

        ll ans = 0;

        for(int b=1; b<=n; ++b){
            ans += 1LL*(n/b) * 1LL*(n/b);
        }

        cout<<ans<<nl;
    }      
  
}