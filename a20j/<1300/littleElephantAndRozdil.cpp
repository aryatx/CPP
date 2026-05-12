#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    bool stillRozdil = false;
    int mini = INT_MAX;
    int ind = -1;

    for(int i=0; i<n; ++i){
        int x; cin>>x;

        if(x<mini){
            mini = x;
            ind = i+1;
            stillRozdil = false;
        }
        else if(x == mini){
            stillRozdil = true;
        }
    }

    if(stillRozdil) cout<<"Still Rozdil";
    else cout<<ind;
  
}