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
// bool is_equal(vector<int> &v)
// {
//     int x = v[0];
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (x != v[i])
//             return false;
//     }
//     return true;
// }
void solve()
{
    int n;
    cin >> n;
    int gcd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        gcd = __gcd(gcd, x);
    }

    cout << gcd << '\n';
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