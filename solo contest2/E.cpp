#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
void solve()
{
    int n, x;
    cin >> n >> x;
    int ans = n / x;
    ll p = n % (ans * x);
    vector<int> v;
    for (int i = 0; i < x; i++)
        v.push_back(ans);
    if (p > 0)
    {
        int i = 0;
        while (p != 0)
        {
            v[i]++;
            i++;
            p--;
        }
    }
    sort(all(v));
    for (auto x : v)
        cout << x << ' ';

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
