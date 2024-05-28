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
void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int p = a;
    int ans = 0;
    bool flag = false;
    if (a == b)
    {
        cout << 0 << '\n';
        return;
    }
    int ans2 = 0, ans3 = 0;
    for (int i = 1; i <= n; i++)
    {
        ans++;
        a = i ^ a;
        // cout << a << '\n';
        if (a == b)
        {
            ans2 = ans;
            flag = true;
            break;
        }
    }
    int res = 0;
    bool findvalue = false;

    // cout << p << '\n';
    for (int i = p + 1; i <= n; i++)
    {
        res++;
        int x = i ^ p;
        if (x == b)
        {
            ans3 = res;
            findvalue = true;
            break;
        }
    }
    // cout << ans2 << ' ' << ans3 << '\n';
    if (min(ans2, ans3) > 0)
        cout << min(ans, res) << '\n';
    else if (max(ans2, ans3) > 0)
        cout << max(ans2, ans3) << '\n';
    else
        cout << -1 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}