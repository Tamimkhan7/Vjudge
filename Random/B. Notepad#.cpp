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
int n;
string s;

void solve()
{
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int p = i;
        for (int j = i + 2; j < n; j++)
        {
            if (s[i] == s[j]){
                i++;
                cnt++;
                cout << s[i] << ' ' << s[j] << '\n';
            }
            else
            {
                if (cnt > 1)
                {
                    cout << "YES" << '\n';
                    return;
                }
                cnt = 0;
            }
                p = i;
        }
    }
    if (cnt > 1)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}