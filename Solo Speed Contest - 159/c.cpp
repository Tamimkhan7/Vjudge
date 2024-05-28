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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    deque<int> cnt;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // for (int i = 1; i <= n; i++)
    // {
    //     if (cnt.size() != k)
    //     {
    //         int x = a[i];
    //         // cout << x << ' ';
    //         cnt.push_back(x);
    //     }
    //     else
    //     {
    //         ans++;
    //         cnt.pop_front();
    //         cnt.pop_front();
    //         i--;
    //     }
    // }
    // // for (auto x : cnt)
    // //     cout << x << ' ';
    // // cout << '\n';
    // // cout << cnt.size() << '\n';
    // if (cnt.size() > 1)
    //     ans++;
    int ans = ceil((double)(n - k) / (k - 1)) + 1;
    cout << ans << '\n';
    return 0;
}