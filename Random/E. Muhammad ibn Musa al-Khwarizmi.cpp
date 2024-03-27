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

    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int sum = 0;
    if (k % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                sum += a[i];
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                sum += a[i];
        }
    }
    if (sum >= 0)
        cout << "Dhonattok" << '\n';
    else
        cout << "Rinattok" << '\n';
}