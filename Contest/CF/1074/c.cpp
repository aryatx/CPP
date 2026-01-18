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
        vector<int> v(n);

        for (auto &el : v)
            cin >> el;

        sort(v.begin(), v.end());

        int maxChain = 1;
        int curr = 1;
        for (int i = 1; i < n; ++i)
        {
            if (v[i] == v[i - 1] + 1)
                curr++;
            else if (v[i] == v[i - 1])
                continue;
            else
                curr = 1;

            maxChain = max(maxChain, curr);
        }
        cout << maxChain << nl;
    }
}