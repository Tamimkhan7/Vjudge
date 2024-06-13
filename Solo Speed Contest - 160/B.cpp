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
    deque<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));
    deque<int> v, vv;
    while (!a.empty())
    {
        v.push_back(a.front());
        a.pop_front();
        vv.push_back(a.back());
        a.pop_back();
    }
    vector<int> ans;
    while (!v.empty())
    {
        ans.push_back(vv.front());
        vv.pop_front();
        ans.push_back(v.front());
        v.pop_front();
    }
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
