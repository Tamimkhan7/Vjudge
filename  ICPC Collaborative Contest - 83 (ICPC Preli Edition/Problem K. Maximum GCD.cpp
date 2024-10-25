#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int gcd = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        gcd = __gcd(gcd, a[i]);
    }
    sort(a + 1, a + n + 1);

    cout << max(a[1], gcd) << '\n';

    return 0;
}