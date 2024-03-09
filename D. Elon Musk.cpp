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
void sovle()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0, cp = 1;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (1LL * i*cp);
        cnt++;
        if (k == cnt)
        {
            cp++;
            cnt = 0;
        }
    }
        cout << ans << '\n';
}
int32_t main()
{
    MTK 
    int t;
    cin >> t;
    while (t--)
        sovle();
}