#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n{};
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;++i) cin>>v[i];
        int ans =0;
        int back =INT_MIN;
        for(int i=0;i<n;++i){
            if (v[i]>back+1){
                ++ans;back=v[i];
        }
    }
        cout<<ans<<endl;
}
}
