#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int y, w; 
        cin>>y>>w;
        
        y = max(y, w);

        cout<<7-y<<"/"<<6;
    }      
  
}