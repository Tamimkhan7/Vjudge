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
void solve()
{
    string s, ss, res;
    int n;
    cin >> s >> ss >> n;
    for (int i = 0; i < ss.size(); i++)
    {
       
        for (int j = 0; j < s.size(); j++)
        {
            int x = ss[i] - '0';
            int y = s[j] - '0';
            int ans = (x * y) % 10;
            res += to_string(ans);
        }
    }
    int cnt = 1;
    
    for (int k = 0; k < i; k++)
        res += '0';
        
    cout << res << '\n';
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}