#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};

    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char currCol = s[0];
        int rem = 0;

        for (int i = 1; i < n; ++i)
        {
            if (currCol == s[i])
            {
                rem++;
            }
            else
                currCol = s[i];
        }

        cout << rem;
    }
}