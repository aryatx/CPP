#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int left = 0, right = 0;
    
    int n; cin>>n;

    for(int i=0; i<n; ++i){
        int l, r;
        cin>>l>>r;

        if(l == 1) left++;
        if(r == 1) right++;
        
    }
    
    int ans = 0;
    ans += left>(n-left) ? n-left: left;
    ans += right>(n-right) ? n-right: right; 

    cout<<ans;
  
}