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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    reverse(all(v));
    vector<ll> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + v[i];
    // for (auto x : pre)
    //     cout << x << ' ';
    // cout << '\n';
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        ll bad = x - y, div_val = 0;

        // show(bad);
        ll val = pre[x - 1];
        if (bad > 0)
            div_val = pre[bad - 1];
        // show(val), show(div_val);
        cout << val - div_val << '\n';
    }
    return 0;
};