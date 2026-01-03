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
        string jailLight;
        cin>>jailLight;
        vector<bool> left(n,false);
        bool pos = true;
        for(int i=0;i<n;++i){
            if(jailLight[i]=='1') continue;
            if(i>0&&jailLight[i-1]=='1'&&!left[i-1]) continue;
            if(i<n-1&&jailLight[i+1]=='1') {
                left[i+1]=true;
                continue;
                }
            pos = false;
        }
        if(pos) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }      
    return 0;   
}