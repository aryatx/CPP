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

        vector<int> ans;

        int backEl = n*3;
        int frontEl = 1;

        for(int i=0; i<n; ++i){
            ans.push_back(backEl--);
            ans.push_back(backEl--);
            ans.push_back(frontEl++);
        }

        for(int i=0; i<3*n; ++i){
            cout<<ans[i]<<" ";
        }
        cout<<nl;
    }      
  
}