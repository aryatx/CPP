#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // Create a copy and sort it to see target positions
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        
        // If k == 1, we can only reverse single elements (no change)
        // So array must already be sorted
        if(k == 1){
            if(a == sorted_a){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            continue;
        }
        
        // For k >= 2, we can always sort the array
        // This is because we can perform adjacent swaps using reversals of length 2
        // which allows us to do bubble sort
        cout << "YES\n";
    }
    
    return 0;
}