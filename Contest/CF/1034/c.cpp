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
        vector<int> v(n);
        for(auto &el:v)cin>>el;
        string ans = "";
        
        vector<int> prefixMin(n);
        vector<int> suffixMax(n);
        int minEl = v[0];
        int maxEl = v[n-1];
        for(int i=0;i<n;++i){
            minEl = min(minEl, v[i]);
            prefixMin[i] = minEl;  
        }
        for(int i=n-1;i>=0;--i){
            maxEl = max(maxEl, v[i]);
            suffixMax[i] = maxEl;
        }
        

        for(int i=0;i<n;++i){
            if(prefixMin[i] == v[i] || suffixMax[i] == v[i]) ans+='1';
            else ans+='0'; 
        }
        cout<<ans<<nl;
    }      
    return 0;   
}