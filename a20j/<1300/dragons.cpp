#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s; cin>>s;
    int n; cin>>n;

    vector<pair<int, int>> dragons;

    for(int i=0; i<n; ++i){
        int ds, sg;
        cin>>ds>>sg;

        dragons.push_back({ds, sg});
    }

    bool possible = true;
    sort(dragons.begin(), dragons.end());

    for(auto el: dragons){
        int ds = el.first;
        int sg = el.second;
        
        if(s-ds>0){
            s+=sg;
        }
        else{
            possible = false;
            break;
        }
    }

    if(possible) cout<<"YES";
    else cout<<"NO";
  
}