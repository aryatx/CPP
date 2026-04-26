#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_map<int, int> mp;
    for(int i=0; i<4; ++i){
        int x; cin>>x;
        mp[x]++;
    }
    cout<<4-mp.size();
}