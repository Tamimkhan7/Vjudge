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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        int ans = 0;
        int ct = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            ans += v[i];
            ct++;
            if (ans >= x)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << ct << '\n';
        else
            cout << -1 << '\n';
    }
}