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
        string a, b;
        cin >> a >> b;
        string s = b, ss = a;

        map<char, int> mp;
        for (auto i : b)
            mp[i]++;
        int n = a.size(), m = b.size();
        int cnt = 0, mx = -1;
        for (auto x : a)
        {
            if (mp[x])
            {
                cnt++;
                mp[x]--;
            }
            else
                break;
        }

        cout << cnt << '\n';
    }
}