#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    ll sum = 0;
    for(int i=0; i<n; ++i){
        int j; cin>>j;
        sum += j;
    }   
    
    double ans = (double)sum/n;
    cout<<ans;
  
}