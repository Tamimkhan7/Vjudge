#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x, y, p, q;
    if (a < 0 and c < 0)
        x = (1LL * (-a) * (-c));
    else
        x = 1LL * a * c;
    if (a < 0 and d < 0)
        y = (1LL * (-a) * (-d));
    else
        y = 1LL * a * d;
    if (b < 0 and c < 0)
        p = (1LL * (-b) * (-c));
    else
        p = (1LL * b * c);
    if (b < 0 and d < 0)
        q = (1LL * (-b) * (-d));
    else
        q = (1LL * b * d);

    cout << max(x, max(y, max(p, q))) << '\n';
    return 0;
}
