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
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            if (m > 0)
                m--;
            else
                ans++;
        }
        else
        {
            if (k > 0)
                k--;
            else if (m > 0)
                m--;
            else
                ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}