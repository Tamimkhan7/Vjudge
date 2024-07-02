#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;
    ll n, m;
    cin >> n >> m;

    ll maxGCD = 1;
    for (ll k = 1; k * k <= m; ++k)
    {
        if (m % k == 0)
        {
            if (k * n <= m)
                maxGCD = max(maxGCD, k);
            if ((m / k) * n <= m)
                maxGCD = max(maxGCD, m / k);
        }
    }
    cout << maxGCD << '\n';
    return 0;
}
