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

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int mx = max(x, y);
    int mn = min(x, y);
    if (mn != 0 || mx == 0 || (n - 1) % mx != 0)
    {
        cout << "-1\n";
        return;
    }

    vector<int> ans;
    int win = 2;
    for (int i = 2; i <= n; i += mx)
    {
        for (int j = 0; j < mx; j++)
            ans.push_back(win);
        win = i + mx;
        show(win);
    }

    for (int x : ans)
        cout << x << " ";
    cout << "\n";
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}