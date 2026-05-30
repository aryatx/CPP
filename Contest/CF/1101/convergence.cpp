#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);

        for(auto &el:v) cin>>el;

        sort(v.begin(), v.end());

        int mid = (n-1)/2;
        
        int calls = 0;
        
        int l=0, r = n-1;

        while(v[l] != v[mid] && v[r] != v[mid]){
            calls++;
            l++;
            r--;
        }

        while(v[l] != v[mid]){
            calls++;
            l++;
        }
        while(v[r] != v[mid]){
            calls++;
            r--;
        }

        cout<<calls<<nl;
    }      
  
}