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
int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    int mx = a[0];
    // cout << mx << '\n';
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        int x = abs(mx - a[i]);
        if (x >= k)
        {
            // cout << a[i] << '\n';
            ans++;
            mx = a[i];
        }
    }
    cout << ans << '\n';
}
// 1 1 2 3 3 4 5 5 5 6 9