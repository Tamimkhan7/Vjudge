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
    int n, x;
    while (cin >> n >> x)
    {
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        for (int mask = 0; mask < (1 << n); mask++)
        {
            ll sum = 0;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    sum += a[i];
                    v.push_back(a[i]);
                }
            }
            if (sum == x and v.size() > 1)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}