#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    int sum = 0;
    bool zero = false;
    int zeroes = 0;
    int fives = 0;
    for(int i=0; i<n; ++i){
        int el; cin>>el;
        if(el == 0) {
            zero = true;
            zeroes++;
        }
        else fives++;

        sum += el;
    }

    while(sum > 0){
        if(sum%9 == 0){
            break;
        }
        else{
            sum -= 5;
            fives--;
        }
    }

    string ans = "-1";
    if(zeroes){
        ans = "";
        for(int i=0; i<fives; ++i){
        ans += '5';
        }
    }
    if(ans == "-1") ;

    else if(ans != ""){
        for(int i=0; i<zeroes; ++i){
        ans += '0';
        }
    }
    else ans = '0';
    
    

    cout<<ans;
}