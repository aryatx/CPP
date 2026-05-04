#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        sum += num;
    }

    int el = sum % (n + 1);

    int ans = 0;

    for (int i = 1; i <= 5; ++i)
    {
        if ((el + i) % (n + 1) != 1)
            ans++;
    }

    cout << ans;
}