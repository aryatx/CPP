#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
       int x;cin>>x;
       while(x%2==0){
        x /= 2;
       }
       while(x>3){
        x -= 3;
       }
       while(x%2==0){
        x /= 2;
       }
       cout<<x<<nl;
    }      
    return 0;   
}