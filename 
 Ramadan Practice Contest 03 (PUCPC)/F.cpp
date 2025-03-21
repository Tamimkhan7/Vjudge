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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, (i + 1)});
    }

    sort(all(v), cmp);
    int sum = 0;
    vector<int> ans;

    // for (auto [x, y] : v)
    // {
    //     cout << x << ' ' << y << '\n';
    // }
    for (auto [x, y] : v)
    {
        if (sum + x <= k)
        {
            sum += x;
            ans.push_back(y);
        }
    }
    cout << ans.size() << '\n';
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
    return 0;
}