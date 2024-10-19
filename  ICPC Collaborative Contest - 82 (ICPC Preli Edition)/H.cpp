#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
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
        n *= 2;
        int a[n + 8];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + n);
        // for (int i = 1; i <= n; i++)
        //     cout << a[i] << ' ';
        ll ans = 0;
        for (int i = 1; i <= n / 2; i++)
            ans += abs(a[i] - a[n - i + 1]);

        cout << ans << '\n';
    }
    return 0;
}