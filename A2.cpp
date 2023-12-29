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
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int ans = 0;
    if (a != 0 and k != 0)
    {
        if (k > a)
        {
            ans += a * 1;
            k -= a;
        }
        else
        {
            ans += k * 1;
            k = 0;
        }
    }
    if (b != 0 and k != 0)
    {
        if (k > b)
        {
            ans += b * 0;
            k -= b;
        }
        else
        {
            ans += k * 0;
            k = 0;
        }
    }
    if (c != 0 and k != 0)
    {
        if (k > c)
        {
            ans += c * (-1);
            k -= c;
        }
        else
        {
            ans += k * (-1);
            k = 0;
        }
    }

    cout << ans << '\n';
}