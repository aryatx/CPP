#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string n; cin>>n;
    int dig = 0;

   for(char ch: n){
    if(ch == '4' || ch == '7') dig++;
   }

    if(dig == 4 || dig == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
}