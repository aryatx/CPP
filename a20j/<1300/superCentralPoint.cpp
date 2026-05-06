#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_map<int, vector<int>> xMap;
    unordered_map<int, vector<int>> yMap;

    int n; cin>>n;

    vector<vector<int>> v;

    for(int i=0; i<n; ++i){
        int x, y;
        cin>>x>>y;

        xMap[x].push_back(y);
        yMap[y].push_back(x);
        v.push_back({x, y});
    }
    
    int ans = 0;

    for(int i=0; i<n; ++i){
        bool rn = false, ln = false, tn = false, bn = false;

        int s = xMap[v[i][0]].size();
        for(int j=0; j<s; ++j){
            if(xMap[v[i][0]][j] > v[i][1]) bn = true;
            if(xMap[v[i][0]][j] < v[i][1]) tn = true;
            if(bn&&tn) break;
        }
        s = yMap[v[i][1]].size();
        
        for(int j=0; j<s; ++j){
            if(yMap[v[i][1]][j] > v[i][0]) rn = true;
            if(yMap[v[i][1]][j] < v[i][0]) ln = true;
            if(rn&&ln) break;
        }

        if(tn&&bn&&rn&&ln) ans++;
    }
    cout<<ans;
  
}