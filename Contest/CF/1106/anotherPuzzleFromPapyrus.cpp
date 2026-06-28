#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, c;
        cin>>n>>c;

        vector<int> a(n), b(n);


        for(int i=0; i<n; ++i) 
            cin>>a[i];
        
        for(int i=0; i<n; ++i) cin>>b[i];

        vector<int> cv = a, d = b;

        sort(cv.begin(), cv.end());
        sort(d.begin(), d.end());
        
        bool possible = true;

        for(int i=n-1; i>=0; --i){
            if(d[i] > cv[i]){
                possible = false;
                break;
            }
        }

        bool addc =false;
        for(int i=n-1; i>=0; --i){
            if(b[i] > a[i]){
                addc = true;
                break;
            }
        }

        if(possible){
            int ans = 0;
            if(addc) ans += c;

            ans += accumulate(a.begin(), a.end(), 0);
            ans -= accumulate(b.begin(), b.end(), 0);

            cout<<ans<<nl;
        }
        else{
            cout<<-1<<nl;
        }
    }      
  
}