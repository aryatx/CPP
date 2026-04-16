#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;

    if(isupper(s[0])){
        cout<<s;
    }
    else{
        s[0] = toupper(s[0]);
        cout<<s;
    } 
  
}