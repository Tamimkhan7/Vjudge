#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve(){
    int n;cin>>n;
    vector<int> v(n), vv(n);
    for(int i=0; i<n;i++)cin>>v[i];
    for(int i=0; i<n;i++)cin>>vv[i];
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int ans = (v[i] * 20) - (vv[i] * 10);
        mx = max(ans, mx);
        if(mx<0)
            mx = 0;
    }
    cout<<mx<<'\n';
}
int32_t main()
{
    MTK;
int t;cin>>t;
while(t--)solve();
}