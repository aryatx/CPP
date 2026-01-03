#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> doors(n);
        for(int i=0;i<n;++i){
            cin>>doors[i];
        }
        int first=-1,last=0;
        for(int i=0;i<n;++i){
            if(first == -1&&doors[i]==1){
                first = i;
            }
            if(doors[i]==1) last=i;
        }
        if(last-first>=x) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }      
    return 0;   
}