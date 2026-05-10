#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    vector<int> v(n);

    unordered_map<int, int> mp;

    for(int i=0; i<n; ++i){
        int num;
        cin>>num;

        
    }

    sort(v.begin(), v.end());
    int ans = INT_MAX;

    for(int i=1; i<n; ++i){
        ans = min(ans, v[i]- v[i-1]);
    }

    cout<<ans;
  
}