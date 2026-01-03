#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n;cin>>n;
        int cntEven = 0, cntOdd = 0;
        for(int i=1;i*i<=n;++i){
            if(n%i == 0){
                if(i%2 == 0) {
                    cntEven++;
                    if(i*i != n){
                        if((n/i)%2 == 0) cntEven++;
                        else cntOdd++;
                    }
                   
                }
                    

                else{
                    cntOdd++;
                    if(i*i != n){
                        if((n/i)%2 == 0) cntEven++;
                        else cntOdd++;
                    }
                    

                }
            }
        }
        cout<<cntOdd<<" "<<cntEven<<nl;
    }      
    return 0;   
}