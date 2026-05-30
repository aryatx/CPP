#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,x,seats;
        cin>>n>>x>>seats;

        string s;
        cin>>s;

        vector<int> tables(x, 0);
        int empt = 0, nempt = 0;

        int seated = n;

        for(int i=0; i<n; ++i){
            if(s[i] == 'I' ){
                if(empt != x){
                    tables[empt] += 1;
                    empt++;
                }
                else seated--;
            }

            else if(s[i] == 'E'){
                if(nempt < empt){

                    if(tables[nempt] < seats){
                        tables[nempt]++;
                    }
                    else{
                        nempt++;
                        bool done = false;
                        while(nempt < empt){
                     
                            if(tables[nempt] < seats){
                                tables[nempt]++;
                                done = true;
                                break;
                            }

                            nempt++;
                        }

                        if(!done){
                            seated--;
                        }
                    }

                    
                }
                else seated--;
            }

            else{
                int ext = 0, intr = 0;

                for(int j=i+1; j<n; ++j){
                    if(s[j] == 'E') ext++;
                    else if(s[j] == 'I') intr++; 
                }


                
            }

        cout<<seated<<nl;
    }      
}
}