#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        vector<int> a(n);
        vector<int> b(n);

        for(auto &el:a) cin>>el;
        for(auto &el:b) cin>>el;

        int ans = 1;
        for(int i=0;i<n;++i){
            if(a[i] > b[i])
            ans += a[i] - b[i];
        }
        cout<<ans<<nl;
    }      
}