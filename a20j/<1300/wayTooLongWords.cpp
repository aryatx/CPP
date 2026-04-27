#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string s; cin>>s;
        if(s.size() <= 10) cout<<s<<nl;
        else {
            cout<<s[0]+to_string(s.size()-2)+s[s.size()-1]<<nl;
        }
    }      
  
}