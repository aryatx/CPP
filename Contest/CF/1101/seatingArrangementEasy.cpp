#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,tables,seats;
        cin>>n>>tables>>seats;

        string s;
        cin>>s;

        int ans = 0;
        int ambi = 0;
        int emptySeats = 0;

        for(int i=0; i<s.size(); ++i){
            if(s[i] == 'I'){
                if(tables){
                    ans++;
                    tables--;
                    emptySeats += seats-1;
                }
            }
            else if(s[i] == 'E'){
                if(emptySeats){
                    ans++;
                    emptySeats--;

                }
                else if(tables && ambi){
                    ans++;
                    tables--;
                    ambi--;

                    emptySeats += seats-1;
                }
            }

            else{
                if(emptySeats){
                    ans++;
                    emptySeats--;
                    ambi++;
                }
                else if(tables){
                    ans++;
                    tables--;
                    emptySeats += seats-1;
                }
            }
        }

        cout<<ans<<nl;
 
    }
}