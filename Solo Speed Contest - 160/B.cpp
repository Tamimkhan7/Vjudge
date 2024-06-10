#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    n *= 2;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    deque<int> v, vv;

    int x = n / 2;
    // cout << n << ' ' << x << '\n';
    for (int i = 1; i <= x; i++)
        v.push_back(a[i]);
    for (int i = x + 1; i <= n; i++)
        vv.push_back(a[i]);
    // reverse(all(v));
    // reverse(all(vv));
    // for (auto x : vv)
    //     cout << x << ' ';
    // cout << '\n';
    vector<int> ans;
    while ((!v.empty()) || (!vv.empty()))
    {
        if (!v.empty())
        {
            ans.push_back(v.back());
            v.pop_back();
        }
        if (!v.empty())
        {
            ans.push_back(v.front());
            v.pop_front();
        }
        if (!vv.empty())
        {
            ans.push_back(vv.front());
            vv.pop_front();
        }
    }
    if (ans.size() == 2)
        swap(ans[0], ans[1]);
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
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
