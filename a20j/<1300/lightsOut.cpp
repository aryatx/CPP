#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<vector<int>> matrix(3, vector<int>(3));

    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cin>>matrix[i][j];
            matrix[i][j] %= 2;
        }
    }

    vector<vector<int>> ans(3, vector<int>(3, 1));

    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            if(matrix[i][j] == 1){
                ans[i][j] += 1;
                ans[i][j] %= 2;

                if(i+1<3){
                    ans[i+1][j] += 1;
                    ans[i+1][j] %= 2;
                }
                if(j+1<3){
                    ans[i][j+1] += 1;
                    ans[i][j+1] %= 2;
                }
                if(i-1>=0){
                    ans[i-1][j] += 1;
                    ans[i-1][j] %= 2;
                }
                if(j-1>=0){
                    ans[i][j-1] += 1;
                    ans[i][j-1] %= 2;
                }
            }
        }
    }

    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cout<<ans[i][j];
        }
        cout<<nl;
    }
  
}