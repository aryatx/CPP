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
        int n, k;
        cin>>n>>k;

        int ans = 0;
        int mult = 1;

        while(n >= mult){
            int setBits = min(k, n/mult);
            if(setBits == 0) break;

            n -= setBits*mult;

            mult *= 2;
            ans += setBits;
        }

        cout<<ans<<nl;
    }      
  
}