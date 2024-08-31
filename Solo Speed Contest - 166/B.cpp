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
    int n;
    cin >> n;
    int ans = 0, k = 0;
    if (n < 2)
    {
        cout << n << '\n';
        return 0;
    }
    for (int i = n; i >= n/2; i--)
    {
        int x = i;
        int cnt = 0;
        while (x % 2 == 0)
        {
            cnt++;
            x /= 2;
        }
        // cout << cnt << ' ' << i << '\n';
        if (cnt >= k)
        {
            k = cnt;
            ans = i;
        }
    }
    cout << ans << '\n';
    return 0;
}