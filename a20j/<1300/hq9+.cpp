#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string p; cin>>p;

    bool ans = false;
    for(int i=0; i<p.size(); ++i){
        if(p[i] == 'H') {
            ans = true;
            break;
        }
        else if(p[i] == 'Q'){
            ans = true;
            break;
        }
        else if(p[i] == '9'){
            ans = true;
            break;
        }
    }

    if(ans) cout<<"YES";
    else cout<<"NO";
  
}