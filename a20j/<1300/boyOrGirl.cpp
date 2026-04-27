#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    vector<int> v(26);
    int n = 0;

    for(int i=0; i<s.size(); ++i){
        if(v[s[i]-'a'] == 0) {
            n++;
            v[s[i]-'a']++;
        }
    }

    if(n&1){
        cout<<"IGNORE HIM!";
    }
    else cout<<"CHAT WITH HER!";
}