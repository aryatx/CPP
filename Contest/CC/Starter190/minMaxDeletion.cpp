#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,q;
        cin>>n>>q;
        vector<int> arr(n);
        int sum=0;
        for(int i=0;i<n;++i) {
            cin>>arr[i];
        }
        for (int i = 0; i < n - 1; ++i) {
        sum += min(arr[i], arr[i + 1]);
    }
        while(q--){
            int i,x;
            cin>>i>>x;
            i--;
            if(i>arr.size()+1) continue;
            int last = arr[i];
            arr[i] = x;
            sum -= last-x;
            

        }
    }      
    return 0;   
}