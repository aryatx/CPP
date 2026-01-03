#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,m;
        cin>>n>>m;

        vector<vector<char>> v(n,vector<char>(m));

        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>v[i][j];
            }
        }

        int index = 0;
        string s = "vika";
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(v[j][i] == s[index]){
                    index++;
                    break;
                }
            }
        }
        if(index == 4) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}