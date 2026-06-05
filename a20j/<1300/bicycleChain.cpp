#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    vector<int> a(n);

    for(auto &el:a) cin>>el;

    int m; cin>>m;   
    vector<int> b(m);
    
    for(auto &el:b) cin>>el;

    int ans = 0;
    int cnt = 0;

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){

            if(b[j]%a[i] == 0){
                if(b[j]/a[i] > ans) {
                    ans = b[j]/a[i];
                    cnt = 1;
                }
                else if(b[j]/a[i] == ans) cnt++;
            }

        }
    }

    cout<<cnt;
  
}