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
        if(n<3) {
            cout<<"Alice"<<nl;
            continue;
        }
        if(n%4==0) cout<<"Bob"<<nl;
        else cout<<"Alice"<<nl;

    }      
    return 0;   
}