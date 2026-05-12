#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;

    vector<int> v = {0, 1, 1};

    for(int i=1; i<=100000; ++i){
        if(v.back() > n) break;
        v.push_back(v[v.size()-1] + v[v.size()-2]);
    }

    if(n == 0){
        cout<<0<<" "<<0<<" "<<0;
    }
    else if(n == 1){
        cout<<1<<" "<<0<<" "<<0;
    }
    else if(n == 2){
        cout<<1<<" "<<1<<" "<<0;
    }
    else{
        auto ind = upper_bound(v.begin(), v.end(), n) - v.begin();
        cout<<v[ind-2]<<" "<<v[ind-4]<<" "<<v[ind-5];
    }

}