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
        cout<<2*n-1<<nl;
        for(int i=1;i<=n;++i){
            cout<<i<<" "<<1<<" "<<i<<nl;
            if(i!=n){
                cout<<i<<" "<<i+1<<" "<<n<<nl;
            }
        }
    }      
    return 0;   
}