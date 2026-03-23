#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;
        ll c, k;
        cin>>n>>c>>k;

        vector<ll> v(n);
        for(ll &el:v) cin>>el;

        sort(v.begin(), v.end());
        
        for(int i=0; i<n; ++i){
            if(c >= v[i]){
                if(k){
                    if(k >= (c-v[i])) {
                        k -= (c-v[i]);
                        c += c;
                    } 
                    else {
                        c += v[i] + k;
                        k = 0;
                    }
                }
                else{
                    c += v[i];
                }
            }
            else break;
        }

        cout<<c<<nl;
    }      
}