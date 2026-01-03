#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
         vector<int> a(n);
         vector<int> b(n);
         for(auto &el:a) cin>>el;
         for(auto &el:b) cin>>el;

         vector<int> m = a;
         for(int i=n-2;i>=0;--i) m[i] = max(m[i+1],m[i]);
         int ans =0;
         for(int i=0;i<n;++i){
            if(k >= b[i]&& (k-1 >= m[i+1] || i ==n-1)){
                ans++;
                k--;
            }
         }
         cout<<ans<<nl;
    }      
    return 0;   
}