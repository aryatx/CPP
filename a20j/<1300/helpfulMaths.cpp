#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin>>s;
    vector<int> v;

    for(int i=0; i<s.size(); ++i){
        if(i%2 == 0)
        v.push_back(s[i]-'0');
    }
    sort(v.begin(), v.end());

    
    for(int i=0; i<v.size()-1; ++i){
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1];
  
}