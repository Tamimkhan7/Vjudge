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
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a.begin() + 1, a.end());
    int ok = 1;
    ll sum = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (sum * 2 < a[i])
            ok = i;
        sum += a[i];
    }
    // for (auto x : a)
    // cout << ok << ' ';
    // cout << '\n';
    cout << n - ok + 1 << '\n';
    return 0;
}