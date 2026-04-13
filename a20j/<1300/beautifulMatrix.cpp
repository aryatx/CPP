#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<vector<int>> v(5, vector<int> (5, 0));

    int row = -1, col = -1;

    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
            cin>>v[i][j];
            if(v[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    cout<<abs(2 - row) + abs(2 - col);
    
}