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
void sovle(){
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for(int i=1; i<=n;i++)cin>>v[i];
    set<int>s;
    for (int i = 1; i <= n; i++)s.insert(v[i]);
    vector<int>ans;
     for (auto i = s.begin(); i != s.end(); i++)
         ans.push_back(*i);
     if (ans.size() >= 3)
         cout << ans[2] << '\n';
         else
             cout << ans.back() << '\n';
}
int32_t main()
{
    MTK
    int t;cin>>t;
    while(t--)sovle();
}