#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, m;
        ll h;
        cin>>n>>m>>h;

        vector<int> v(n);
        for(auto &el:v) cin>>el;

        vector<int> ans = v;

        vector<int> history;

        while(m--){
            int b, c;
            cin>>b>>c;
            history.push_back(b-1);

            ans[b-1] += c;
            if(ans[b-1] > h) {
                for(auto &el:history) {
                    ans[el] = v[el];
                }
                history.clear();
            }
        }
        for(auto &el:ans) cout<<el<<" ";
        cout<<nl;
    }      
  
}