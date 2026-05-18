#include <bits/stdc++.h>
using namespace std;

void helper(string num, vector<string> &ans, int idx, string cur){
    if(idx == num.size()){
        ans.push_back(cur);
        return;
    }

    if(idx == num.size()-1){
        int temp = num[idx]-'0';
        cur += (temp + 'a' - 1);
        helper(num, ans, idx+1, cur);
        return;
    }
    if(num[idx+1] == '0'){
        int temp = (num[idx]-'0')*10 + num[idx+1]-'0';
        cur += (temp + 'a' - 1);
        helper(num, ans, idx+1, cur);
        return;
    }
    int temp = (num[idx]-'0')*10 + num[idx+1]-'0';
    
    if(temp>26){
        int g = num[idx]-'0';
        cur += (g + 'a' - 1);
        helper(num, ans, idx+1, cur);
        
    }
    else{
        int g = num[idx]-'0';
        cur += (g + 'a' - 1);
        helper(num, ans, idx+1, cur);
        cur.pop_back();
        cur += (temp + 'a' - 1);
        helper(num, ans, idx+2, cur);
    }

}

int main(){
    ios::sync_with_stdio;
    cin.tie(NULL);

    string num;
    cin>>num;

    vector<string> ans;
    
    helper(num, ans, 0, "");

    for(auto &el:ans){
        cout<<el<<'\n';
    }

}