#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    int N = 1e6;

    vector<int> spf(N+1);
    for(int i=1; i<=N; ++i) spf[i] = i;

    for(int i=2; i*i<=N; ++i){
        if(spf[i] == i) {
            for(int j=i*i; j<=N; j+=i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }

    while(tc--){
        int n; cin>>n; 

        vector<pair<int,int>> primes;

        while(n > 1){
            int prd = spf[n];
            int cnt = 0;

            while(n%prd == 0){
                n /= prd;
                cnt++;
            }

            primes.pb({prd, cnt});
        }

        int ans = primes.size();

        for(int i=0; i<primes.size(); ++i){
            ans += primes[i].second;
        }

        cout<<ans-1<<nl;
    }      
  
}