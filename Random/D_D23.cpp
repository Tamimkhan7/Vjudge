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
        int n, k;
        cin >> n >> k;
        vector<int> v(n), minipos;
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int flag = 0;
        for (int mask = 0; mask < (1 << n); mask++)
        {
            int sum = 0;
            vector<int> res;
            for (int i = 0; i < n; i++)
            {
                if ((mask >> i) & 1)
                {
                    int x = v[i];
                    sum += x;
                    res.push_back(x);
                }
            }
            if (res.size() == k)
            {
                flag = 1;
                minipos.push_back(sum);
            }
        }
        if (flag != 0)
        {
            sort(all(minipos));
            int ans = minipos[0];
            int finalans = 1;
            for (int i = 1; i < minipos.size(); i++)
            {
                if (ans == minipos[i])
                    finalans++;
            }
            cout << finalans << '\n';
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < n; i++)
                ans += v[i];
            cout << ans << '\n';
        }
    }
}