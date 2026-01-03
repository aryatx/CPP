#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<int> arr(n);
        for(auto &el:arr) cin>>el;

        set<int> total, prev;
        int part_count = 0;
        for(int i=0;i<n;++i){
            total.insert(arr[i]);
            if(prev.count(arr[i])){
                prev.erase(arr[i]);
            }
            if(prev.size()==0){
                part_count++;
                prev = total;
            }
        }
        cout<<part_count<<nl;
    }      
    return 0;   
}