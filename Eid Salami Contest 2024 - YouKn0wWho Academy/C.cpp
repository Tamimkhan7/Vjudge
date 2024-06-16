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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll sum = 0, y = 1;
            for (int j = i; j < n; j++)
            {
                sum += v[j];
                y /= __gcd(y, 1LL * v[j]);
                y *= v[j];
                // cout << sum << ' ' << y << '\n';
                if (y > total)
                    break;
                if (sum % y == 0)
                    ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}