#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

bool helper(vector<int> &arr, int sum, int target, int index)
{
    if (sum == target)
        return true;

    if (sum > target || index > arr.size() - 1)
        return false;

    bool ans = helper(arr, sum + arr[index], target, index + 1);

    if (ans == true)
        return true;

    ans = helper(arr, sum, target, index + 1);

    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 3, 2, 4};
    bool bn = helper(v, 0, 11, 0);
    cout << bn;
}