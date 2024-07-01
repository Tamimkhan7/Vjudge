#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    ll ans = LLONG_MAX;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll x = n / i;
            ll c = (i - 1) + (x - 1);
            ans = min(c, ans);
        }
    }

    ans = min(ans, n - 1); 
    cout << ans << '\n';

    return 0;
}
