#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int n; cin>>n;
        int x{}, y{}, z{};
        while(n--){
            int a, b, c;
            cin>>a>>b>>c;
            x+=a;
            y+=b; 
            z+=c;
        }

        if(x==0 && y==0 && z==0) cout<<"YES";
        else cout<<"NO";
    }      
  
}