#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int max_mem = n;
        vector<vector<char>> members(n, vector<char>(k));
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < k; ++j) {
                cin >> members[i][j];
            }
        }
        vector<char> head = members[0];
        
        for(auto mem:members){
            for(int j=0;j<k;j++){
                if(mem[j]!=head[j]){
                    --max_mem;break;
                } 
            }
        }
        cout<<max_mem<<endl;

    }
}