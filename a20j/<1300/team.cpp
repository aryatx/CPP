#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;

    int ans = 0;
    for(int i=0; i<n; ++i){
        int num1, num2, num3;
        cin>>num1>>num2>>num3;

        int score = 0;
        if(num1 == 1) score++;
        if(num2 == 1) score++;
        if(num3 == 1) score++;

        if(score>=2) ans++;
    }
    cout<<ans;
}