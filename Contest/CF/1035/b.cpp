#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        ll n;cin>>n;
        ll px,py,qx,qy;
        cin>>px>>py>>qx>>qy;
        ll dist = (px-qx)*(px-qx) + (py-qy)*(py-qy);

        ll sum = 0, mx = 0;

        for(int i=0;i<n;++i){
            ll x; cin>>x;
            sum += x;
            mx = max(x,mx);
        }

        if(sum*sum < dist) {
            cout<<"No"<<nl;
            continue;
        }

        ll mn = max(2*mx-sum, 0ll);
        if(mn*mn > dist){
            cout<<"No"<<nl;
            continue;
        }
        cout<<"Yes"<<nl;
        
    }      
    return 0;   
}
