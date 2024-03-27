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
    int n;
    cin >> n;
    vector<int> v(n+2),left(n+2,0), right(n+2,0);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        left[i] = __gcd(left[i - 1], v[i]);
    }
//    for(auto x: left)cout<<x<<' ';
//    cout << '\n';
   for (int i = n; i > 0; i--)
       right[i] = __gcd(right[i + 1], v[i]);
   int ans = 0;
//    for (auto x : right)
//        cout << x << ' ';
//    cout << '\n';
   for (int i = 1; i <= n; i++)
   {
       int res = __gcd(right[i + 1], left[i - 1]);
    //    cout << right[i + 1] << ' ' << left[i - 1] << '\n';
       if (res != 1)
           ans++;
    }
   
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}