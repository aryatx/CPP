#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    int minS; cin>>minS;
    int maxS = minS;

    int amazed = 0;

    for(int i=1; i<n; ++i){
        int score; cin>>score;

        if(score<minS){
            minS = score;
            amazed++;
        }
        if(score>maxS){
            maxS = score;
            amazed++;
        }
    }
    cout<<amazed;
  
}