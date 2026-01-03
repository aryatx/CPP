#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int> v(n);
        for(auto &el:v) cin>>el;
        int playerNeeded = v[j-1];
        sort(v.begin(),v.end());
        bool isPossible = true;
        if(k != 1){
            isPossible = true;
        }
        else{
            if(playerNeeded != v[n-1]) isPossible =false;
        }
        if(isPossible)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
    return 0;   
}