#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
using ll = long long;

int helper(string num, int idx){

    if(idx == num.size()) return 1;

    if(idx == num.size()-1){
        if(num[idx] == '*') return 9;
        else return 1;
    }

    if(num[idx] == '*'){
        //** 
        if(num[idx+1] == '*') {
            int ans = 0;
            //single char
            ans += helper(num, idx+1)*9;
            //double char
            ans += helper(num, idx+2)*16;
            // 11 to 26

            return ans;
        }
        //*[]
        else{
            int ans = 0;
            //single char
            ans += helper(num, idx+1)*9;
            //double char
            int temp = num[idx+1]-'0';
            if(temp <= 6 ){
                ans += helper(num, idx+2)*2;
            }
            else{
                ans += helper(num, idx+2)*1;
            }
            return ans;
        }
        
    }
    else{
        //[]*
        if(num[idx+1] == '*'){
            int ans = 0;
            //single char
            if(num[idx] != '0'){
                ans += helper(num, idx+1);
            }

            //double char
            int temp = num[idx]-'0';
            if(temp<=1){
                ans += helper(num, idx+2)*9;
            }
            if(temp == 2) ans += helper(num, idx+2)*6;
            
            return ans;
        }
        //[][]
        else{
            int ans = 0;
            //single char
            if(num[idx] != '0') ans += helper(num, idx+1);

            //double char
            int temp = (num[idx]-'0')*10 + num[idx] - '0';
            if(temp <= 26){
                ans += helper(num, idx+2);
            }
            return ans;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string num;
    cin>>num;

    cout<<helper(num, 0);
}