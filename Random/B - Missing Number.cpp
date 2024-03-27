#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int32_t main()
{
    ll n, x;
    cin >> n;
    ll ans = 0;
    while (cin >> x)
    {
        ans += x;
    }
    // cout << ans << '\n';
    ll sum = (n * (n + 1)) / 2;
    cout << sum - ans;
}