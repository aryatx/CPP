#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);
        
        for(int i=0; i<n; ++i) cin>>v[i];

        vector<ll> ans;

        ans.push_back(v[0]);

        ll sum = v[0];

        ll prevAv = v[0];

        for(int i=1; i<n; ++i){
            sum += v[i];
            
            ll av = sum/(i+1);

            if(prevAv > av){
                ans.push_back(av);
                prevAv = av;
            }
            else{
                ans.push_back(prevAv);
            }  
        }

        for(int i=0; i<n; ++i){
            cout<<ans[i]<<" ";
        }
        cout<<nl;
    }      
  
}