#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
   int t;cin>>t;
   while(t--){
    int n,m,x;cin>>n>>m>>x;
    cout << (n * 2 + 2 * m) * x << '\n';
   }
    return 0;
}