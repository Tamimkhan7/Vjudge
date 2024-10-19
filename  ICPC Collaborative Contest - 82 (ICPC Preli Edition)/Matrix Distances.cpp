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
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    map<int, vector<pair<int, int>>> cnt;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int x = a[i][j];
            cnt[x].push_back({i, j});
        }
    }
    ll ans = 0;
    for (auto [x, y] : cnt)
    {
        int sz = y.size();
        vector<int> row(sz), col(sz);
        for (int i = 0; i < sz; i++)
        {
            row[i] = y[i].first;
            col[i] = y[i].second;
        }
        sort(all(row));
        sort(all(col));

        vector<ll> pref_row(sz + 1, 0);
        for (int i = 0; i < sz; i++)
            pref_row[i + 1] = pref_row[i] + row[i];

        for (int i = 0; i < sz; i++)
        {
            ans += row[i] * i - pref_row[i];
            ans += (pref_row[sz] - pref_row[i + 1]) - row[i] * (sz - i - 1);
        }

        vector<ll> pref_col(sz + 1, 0);
        for (int i = 0; i < sz; i++)
            pref_col[i + 1] = pref_col[i] + col[i];

        for (int i = 0; i < sz; i++)
        {
            ans += col[i] * i - pref_col[i];
            ans += (pref_col[sz] - pref_col[i + 1]) - col[i] * (sz - i - 1);
        }
    }
    cout << ans << '\n';
    return 0;
}

// Tamim