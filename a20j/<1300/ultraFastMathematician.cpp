#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    string s1; cin>>s1;
    string s2; cin>>s2;
    
    int n = s1.size();
    
    string ans = "";

    for(int i=0; i<n; ++i){
        if(s1[i] != s2[i]) ans+='1';
        else ans+='0';
    }  

    cout<<ans;
}