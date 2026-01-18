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

        int maxi = -1e9;

        for(int i=0; i<n; ++i){
            cin>>v[i];
            if(v[i] > maxi){
                maxi = v[i];
            }
        }

        int value = maxi*n;

        cout<<value<<nl;
    }      
  
}