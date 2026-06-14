#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    string s;
    cin >> s;

    if (k > s.size())
        cout << -1;
    else
    {
        set<char> st;

        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); ++i)
        {
            st.insert(s[i]);
            mp[s[i]]++;
        }

        int maxK = s.size() / st.size();

        if (maxK < k)
            cout << -1;
        else
        {
            bool pos = true;

            string ans = "";

            for (auto [el, cnt]: mp)
            {
                if (cnt % k != 0)
                {
                    cout << -1;
                    pos = false;
                    break;
                }
                ans += string(cnt/k, el);
            }

            string m = ans;
            while(--k){
                ans += m;
            }
            if (pos)
                cout << ans;
        }
    }
}