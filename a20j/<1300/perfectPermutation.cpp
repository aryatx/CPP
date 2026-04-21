#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;

    if(n&1){
        cout<<-1;
    }

    else{
        int i = 2;
        bool add = false;

        while(i<=n){
            cout<<i<<" ";
            if(!add) i--;
            else i+=3;

            add = !add;
        }
    }
  
}