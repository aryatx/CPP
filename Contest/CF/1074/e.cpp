#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, m, k;
        cin>>n>>m>>k;

        vector<ll> robots(n);
        for(auto &el:robots) cin>>el;

        vector<ll> spikes(m);
        for(auto &el:spikes) cin>>el;

        string ins; cin>>ins;

        int cnt = n;
        for(int i=0; i<k; ++i){
            if(ins[i] == 'L'){
                for(int j=0; j<n; ++j){
                    if(robots[j] == -1e9) continue;
                    robots[j]--;
                    auto spike = *(lower_bound(spikes.begin(), spikes.end(), robots[j]));

                    if(spike == robots[j]) {
                        robots[j] = -1e9;
                        cnt--;
                    }
                }
                
            }
            else{
                for(int j=0; j<n; ++j){
                    if(robots[j] == -1e9) continue;
                    robots[j]++;
                    auto spike = *(lower_bound(spikes.begin(), spikes.end(), robots[j]));

                    if(spike == robots[j]) {
                        robots[j] = -1e9;
                        cnt--;
                    }
                }
            }
            cout<<cnt<<" ";
        }
        cout<<nl;

        
    }      
  
}