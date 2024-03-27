#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
const int N = 1e6 + 10;
vector<int> v[N];
void divsiors()
{
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
            v[j].push_back(i);
    }
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto u : v[a[i]])
        {
            // cout << u << ' ';
            if (mp[u] > 0)
            {
                ans += u;
                break;
            }
        }
        // cout << '\n';
    }
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    divsiors();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}