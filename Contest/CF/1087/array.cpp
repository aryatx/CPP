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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (ll &el : v)
            cin >> el;

        vector<ll> ans(n, 0);

        for (int i = 0; i < n; ++i)
        {
            ll greaterThanI = 0;
            ll lessThanI = 0;
            for (int j = i + 1; j < n; ++j)
            {
                if (v[i] < v[j])
                    greaterThanI++;
                else if (v[i] > v[j])
                    lessThanI++;
            }
            ans[i] = max(greaterThanI, lessThanI);
        }
        for (ll &el : ans)
            cout << el << " ";
        cout << nl;
    }
}