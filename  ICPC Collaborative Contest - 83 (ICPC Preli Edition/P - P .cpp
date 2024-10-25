#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007

const int N = 1e9 + 9;
ll a[N][N], pref[N][N];

void matrix_prefix()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            pref[i][j] = (pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j]) % mod;
        }
    }
}

ll power(ll x, ll n)
{
    ll ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

void matrix()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            ll val = (power(2, i) * power(3, j)) % mod;
            a[i][j] = val % mod;
        }
    }
}

int32_t main()
{
    MTK;
    matrix();
    matrix_prefix();
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        ll sum = (pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1]) % mod;
        cout << sum << '\n';
    }
    return 0;
}
