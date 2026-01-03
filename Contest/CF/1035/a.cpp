#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        if(a == b+1 && a%2 != 0){
            cout<<y<<nl;
        }
        else if(a > b){
            cout<<-1<<nl;
        }
        else if(y >= x){
            cout<<(b-a)*x<<nl;
        }
        else if(x > y){
            if((a%2 + b%2)%2 == 0){
                cout<<((b-a)/2)*x + ((b-a)/2)*y<<nl;
            }
            else if(b%2 == 0){
                cout<<(b-a)/2*y + ((b-a)/2+1)*x<<nl;
            }
            else cout<<(b-a)/2*x + ((b-a)/2+1)*y<<nl;
        }
    }      
    return 0;   
}