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
    int n, m;
    cin >> n >> m;
    ll div = m / n;
    ll mo = m % n;
    vector<ll> v;
    for (int i = 1; i <= n; i++)
        v.push_back(div);
    v[v.size() - 1] += mo;
    int ans = 0;
    for (auto x : v)
        ans = __gcd(1LL * ans, x);
    int p = 1e3;
    while (p-- and v[0] > 2)
    {
        v[0]--;
        v[v.size() - 1]++;
        int gcd;
        for (auto x : v)
            gcd = __gcd(1LL * gcd, x);
        ans = max(1LL * gcd, 1LL * ans);
    }
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    cout << ans << '\n';
}
