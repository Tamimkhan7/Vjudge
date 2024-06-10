#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{
 int a,b;cin>>a>>b;
 if(a>=b)cout<<"YES"<<'\n';
 else
     cout << "NO" << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    solve();
    return 0;
}
