#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> perm(n);
        perm[0] = 1;
        for(int i=1;i<n;++i){
            perm[i] = n-i+1;
        }
        for(auto num:perm){
            cout<<num<<" ";
        }
        cout<<nl;
    }      
    return 0;   
}