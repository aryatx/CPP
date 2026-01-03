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
        string ans = "";
        if(n==k){
            while(k--){
                ans += '1';
            }
            cout<<ans<<nl;
            continue;
        }
        if(n==k+1){
            while(k--){
                ans += '1';
            }
            ans += '0';
            cout<<ans<<nl;
            continue;            
        }
        if(k==0){
            while(n--){
                ans += '0';
            }
            cout<<ans<<nl;
            continue;
            
        }
        ans += '0';
        int zeroes = n-k-1;
        while(--k){
            ans+= '1';
        }
        while(zeroes--) ans+= '0';
        ans += '1';
        cout<<ans<<nl;

    }      
    return 0;   
}