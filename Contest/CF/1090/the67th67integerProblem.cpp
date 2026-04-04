#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    cin >> tc;

    while (tc--)
    {
        vector<int> v(7);
        for (int i = 0; i < 7; ++i)
            cin >> v[i];

        sort(v.begin(), v.end());

        for (int i = 0; i < 6; ++i)
        {
            v[i] *= -1;
        }

        int ans = 0;
        for (int i = 0; i < 7; ++i)
            ans += v[i];

        cout << ans << nl;
    }
}